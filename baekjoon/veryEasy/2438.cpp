# include <iostream>
# include <cstdio>

using namespace std;

//https://www.acmicpc.net/problem/2438

int main() {
    int n;
    cin >> n;

    for (int i = 1; i<= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }  
    
    
    return 0;
}