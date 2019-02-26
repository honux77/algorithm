#include <cstdio>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;
using i64 = long long int;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
	string num;
	int ans = 0;
	map<char,int> nmap;
    cin >> num;
	for (auto n: num) {
		nmap[n]++;
		if (n == '6' || n == '9')
			continue;
		ans = max(nmap[n], ans);
	}
	ans = max(ans, (nmap['6'] + nmap['9'] + 1) / 2);
	cout << ans << endl;
    return 0;
}
