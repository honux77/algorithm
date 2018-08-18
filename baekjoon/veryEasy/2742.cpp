#include <iostream>
#include <cstdio>

using namespace std;

//https://www.acmicpc.net/problem/2742

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    for (int i = n; i >= 1; i--) {
        printf("%d\n", i);
    }
    return 0;
}