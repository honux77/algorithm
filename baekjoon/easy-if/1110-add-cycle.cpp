//https://www.acmicpc.net/problem/1110

#include <iostream>
#include <cstdio>

using namespace std;

int main () {
    int n, a, b, n2, count = 0;
    cin >> n; 
    n2 = n;

    do {
        count++;
        a = n2 / 10;
        b = n2 % 10;        
        n2 = b * 10 + (a + b) % 10;
    } while (n2 != n);

    cout << count << endl;
}