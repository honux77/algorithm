//https://www.acmicpc.net/problem/2448

#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> buf;

void fillstar(int n, int row, int col) {
    if (n == 3) {
        buf[row][col] = '*';
        buf[row + 1][col - 1] = '*';
        buf[row + 1][col + 1] = '*';
        for (int i = 0; i < 5; i++) {
            buf[row + 2][col - 2 + i] = '*';
        }
        return;
    }
    fillstar(n / 2, row, col);
    fillstar(n / 2, row + (n / 2), col - (n / 2));
    fillstar(n / 2, row + (n / 2), col + (n / 2));
}

void print(int size) {
    for(int i = 0; i < size ; i++) {
        cout << buf[i] << endl;
    }
}
int main() {    
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    buf.resize(n, string(2 * n - 1, ' ')); 
    fillstar(n, 0, n - 1);   
    print(n);
    return 0;
}