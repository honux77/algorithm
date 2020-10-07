#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ull = long long int;

struct Point {
    int x;
    int y;
};

bool cmpX(Point p1, Point p2) {
    return p1.x < p2.x;
}

bool cmpY(Point p1, Point p2) {
    return p1.y < p2.y;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;

    vector<Point> v(n);

    for (int i = 0; i < n; i++) {
        Point p;
        cin >> p.x >> p.y;
        v[i] = p;
    }

    stable_sort(v.begin(), v.end(), cmpX);
    stable_sort(v.begin(), v.end(), cmpY);

    for (auto &p: v) {
        cout << p.x << " " << p.y << "\n";
    }

    return 0;
}