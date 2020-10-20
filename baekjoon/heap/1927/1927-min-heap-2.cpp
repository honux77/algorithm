#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ull = long long int;

//https://www.geeksforgeeks.org/binary-heap/
void swap(vector<int>& a, int i, int j) {
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

void push(vector<int>& a, int num) {
    a.push_back(num);
    int curr = a.size()  - 1;
    int parent = (curr - 1) / 2;

    while (curr != 0 && a[curr] < a[parent]) {
        swap(a, curr, parent);
        curr = parent;
        parent = (curr - 1) / 2;
    }
}

void heapify(vector<int> &a, int i) {    
    int l = i * 2 + 1;
    int r = (i + 1) * 2;
    int s = i;

    if (l < a.size() && a[l] < a[i]) {
        s = l;
    }
    if (r < a.size() && a[r] < a[s]) {
        s = r;
    }

    if (s != i) {
        swap(a, i, s);
        heapify(a, s);
    }
}

int pop(vector<int>& a) {
    if (a.size() == 0) return 0;

    swap(a, 0, a.size() - 1);
    int ret = a.back();
    a.pop_back();

   heapify(a, 0);
   return ret;    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    vector<int> a;

    cin >> n;
    while (n--) {
        int num;
        cin >> num;
        if (num == 0) {
            cout << pop(a) << "\n";
        } else {
            push(a, num);
        }
    }

    return 0;
}
