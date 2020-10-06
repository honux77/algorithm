#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using i64 = long long int;

struct Point {
	int x;
	int y;
};

bool cmpX(Point a, Point b) {
	return a.x < b.x;
}

bool cmpY(Point a, Point b) {
	return a.y < b.y;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
	vector <Point> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i].x >> a[i].y;
	}
	
	stable_sort(a.begin(), a.end(), cmpY);
	stable_sort(a.begin(), a.end(), cmpX);

	for (auto & p: a) {
		cout << p.x << " " << p.y << "\n";
	}

    return 0;
}
