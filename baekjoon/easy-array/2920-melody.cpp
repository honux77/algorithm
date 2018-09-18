//https://www.acmicpc.net/problem/2920

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n = 8;
    bool asc = true, dsc = true;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            asc = false;
            break;
        }
    }

    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[i - 1]) {
            dsc = false;
            break;
        }
    }
    if(asc) {
        cout << "ascending" <<endl;
    } else if(dsc) {
        cout << "descending" <<endl;
    } else {
        cout << "mixed" << endl;
    }    
    return 0;
}