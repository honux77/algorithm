#include "stdafx.h"

#include <iostream>
#include <string>
#include <map>

using namespace std;

//STL map test
int main() {	
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	map<int, int> m;
	map<string, string> m2;
	
	//insert
	m[5] = 50;
	m[1] = 20;
	m[-3] = 100;

	//map is sorted, internally RB tree is used.
	for (auto& mi : m) {
		cout << "k: " << mi.first << ", v: " << mi.second << endl;
	}
	
	//as soon as we use [] operation, then init value inserted associated with that key
	cout << "before using [], count = " << m.count(20) << endl;
	cout << "init value : " << m[20] << endl;
	cout << "after using [], count = " << m.count(20) << endl;

	return 0;
}
