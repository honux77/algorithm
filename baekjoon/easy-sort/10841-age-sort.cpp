#include <cstdio>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
using i64 = long long int;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
	vector <vector <string>> v(201);

	for (int i = 0; i < n; i++) {
		int age;
		string name;
		cin >> age >> name;
		v[age].push_back(name);
	}

	for (int i = 1; i <= 200; i++) {
		if (v[i].size() != 0) {
			for (auto &name: v[i]) {
				cout << i << " " << name << "\n";
			}
		}
	}
    return 0;
}
