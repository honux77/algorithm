#include <iostream>
#include <vector>

using namespace std;

static int M = 6;

//use insertion sort when size is less than 10
static void insertionsort(int a[], int l, int r) {
	int i, j, temp;
	for (int i = l; i <= r; i++) {
		temp = a[i];
		j = i;
		while (j > 0 && a[j - 1] > temp) {
			a[j] = a[j - 1];
			j--;
		}
		a[j] = temp;
	}
}

static void myMerge(int arr[], int temp[], int left, int middle, int right) {
	for (int i = left; i <= right; i++) {
		temp[i] = arr[i];
	}

	int l = left;
	int r = middle + 1;
	int c = left;

	while(l <= middle && r <= right) {
		if(temp[l] <= temp[r]) {
			arr[c] = temp[l];
			l++;
		} else {
			arr[c] = temp[r];
			r++;
		}
		c++;
	}

	int remain = middle - l;
	for (int i = 0; i <= remain; i++) {
		arr[c + i] = temp[l + i];
	}
}

static void _mergesort(int a[], int t[], int l, int r) {
    if (r - l <= M) {
		insertionsort(a, l, r);
        return;
    }

    int m = (l + r) / 2;
    _mergesort(a, t, l, m); 
    _mergesort(a, t, m + 1, r); 
	myMerge(a, t, l, m, r);
}

void mergesort(int a[], int size) {
	int *temp = new int[size];
	_mergesort(a, temp, 0, size - 1);
	delete []temp;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	int *a = new int[n];

	for (int i = 0; i < n ; i++) {
		cin >> a[i];
	}

	mergesort(a, n);
	for (int i = 0; i < n; i++) {
		cout << a[i] << "\n";
	}

	delete []a;
	return 0;
}
