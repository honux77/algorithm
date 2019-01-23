#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

/*
STL map exmaple
It can sort by descending order using 3rd parameter greater<T>
*/
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	map<int, int, greater<int>> rmap;
	
	rmap[5] = 1;
	rmap[3] = 2;
	rmap[9] = 3;
	rmap[-3] = 4;

	for (auto & iv : rmap)
		cout << iv.first << ": " << iv.second << endl;

	return 0;
}

