# include <iostream>
# include <cstdio>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        //cout << i << endl;
        printf("%d\n", i);
    }
    return 0;
}