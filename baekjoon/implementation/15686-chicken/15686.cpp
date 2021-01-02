#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ull = long long int;

int a[50][50];
const int INF = 7654321;
int cost = INF;

vector<pair<int,int>> houses;
vector<pair<int,int>> stores;
vector<pair<int,int>> buffer;
vector<vector<pair<int,int>>> combos;

int getHouseMinDistanceFromStores(int r, int c, int cIdx) {
    int d = INF;
    for (auto store: combos[cIdx]) {
        int currDistance = abs(store.first - r) + abs(store.second - c);
        d = min(currDistance, d);
    }
    //cerr << r << ", " << c << ": " << d << "\n";
    return d;
}

void getScore(int comboIdx) {
    int total = 0;    
    for (auto house: houses) {                
        total += getHouseMinDistanceFromStores(house.first, house.second, comboIdx);
    }    
    cost = min(cost, total);
}

void combination(int offset, int k) {
    if (k == 0) {
        vector<pair<int,int>> t = buffer;
        combos.push_back(t);
        return;
    }

    for (int i = offset; i <= stores.size() - k; i++) {
        buffer.push_back(stores[i]);
        combination(i + 1, k - 1);
        buffer.pop_back();
    }
}

void removeAndGetScore(int m) {
    combination(0, m);
    for (int i = 0; i < combos.size(); i++) {
        getScore(i);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m, c;
    cin >> n >> m;
    c = 0;

    for (int i = 0; i < n; i++) {
        for (int j  =0; j< n; j++) {
            cin >> a[i][j];
            if (a[i][j] == 1) {
                houses.push_back({i, j});
            } else if (a[i][j] == 2) {
                stores.push_back({i, j});
            }
        }
    }

    removeAndGetScore(m);
    cout << cost << endl;    
    return 0;
}