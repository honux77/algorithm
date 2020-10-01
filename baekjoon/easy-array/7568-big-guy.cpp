#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;
using i64 = long long int;

struct Man {
	int w;
	int h;
};

void check(vector<Man> v, int idx) {
	int b  = 1;
	Man m  = v[idx];
	
	for (int i = 0; i < v.size(); i++) {
		if (m.w < v[i].w && m.h < v[i].h) b++;
	}
	cout << b << " ";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
	cin >> n;
	
	vector<Man> v(n);
	
	for (int i = 0; i < n; i++) {
		Man man;
		cin >> man.w >> man.h;
		v[i] = man;
	}
	
    for (int i = 0; i < n; i++) {
		check(v, i);
	}
	cout << "\n";
    return 0;
}