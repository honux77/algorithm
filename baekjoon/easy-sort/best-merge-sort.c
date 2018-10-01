static int M = 10;
//insertion sort to be used once the mergesort partitions become small enough
static void insertionsort(int[] a, int l, int r) {
    int i, j, temp;
    for (i = 1; i < r + 1; i++) {
        temp = a[i];
        j = i;
        while ((j > 0) && a[j - 1] > temp) 
        {
            a[j] = a[j - 1];
            j = j - 1;
        }
        a[j] = temp;
    }
}

//standard merging two sorted half arrays into single sorted array
static void merge(int[] merged_a, int start_a, int[] half_a1, int start_a1, int size_a1, 
                         int[] half_a2, int start_a2, int size_a2) {
    int i, j, k;
    int total_s = size_a1 + size_a2;
    for (i = start_a1, j = start_a2, k = start_a; k < (total_s); k++) {
        // if reached end of first half array, run through the loop 
        // filling in only from the second half array
        if (i == size_a1) {
            merged_a[k] = half_a2[j++];
            continue;
        }
        // if reached end of second half array, run through the loop 
        // filling in only from the first half array
        if (j == size_a2) {
            merged_a[k] = half_a1[i++];
            continue;
        }
        // merged array is filled with the smaller element of the two 
        // arrays, in order
        merged_a[k] = half_a1[i] < half_a2[j] ?
                      half_a1[i++] : half_a2[j++];
    }
}

//merge sort data during merging without the additional copying back to array
//all data movement is done during the course of the merges
static void mergesortNoCopy(int[] a, int[] b, int l, int r) {
    if (r - l <= M) {
        insertionsort(a + l, l, r - l);
        return;
    }
    int m = (l + r) / 2;
    //switch arrays to msort b thus recursively writing results to b
    mergesortNoCopy(b, a, l, m); //merge sort left
    mergesortNoCopy(b, a, m + 1, r); //merge sort right
    //merge partitions of b into a
    merge(a, l, b, l, m - l + 1, b, m + 1, r - m); //merge
}

static void mergesort(int[] a) {
    int[] aux = Arrays.copyOf(a, a.length);
    mergesortNoCopy(a, aux, 0, a.length - 1);
}
