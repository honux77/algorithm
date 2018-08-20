#include <iostream>
#include <cstdio>

using namespace std;

//https://www.acmicpc.net/problem/2441
//print star 4
int main() {
    int n;
    cin >> n;
    for (int i = n; i >= 1; i--) {
        for (int j = 0; j < n- i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}