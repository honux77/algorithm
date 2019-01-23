#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>

using namespace std;

char getColor(char i, char j) {
	map<char, int> t;
	t[i]++;
	t[j]++;
	if (t['R'] == 0) 
		return 'R';
	if (t['G'] == 0)
		return 'G';
	return 'B';
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	vector<char> rgb;

	cin >> n;
	char c;
	for (int i = 0; i < n; i++) {		
		cin >> c;		
		rgb.push_back(c);
	}
	//add one more
	rgb.push_back(c);


	int count = 0;
	for (int i = 0; i < rgb.size() - 2; i++) {
		if (rgb[i] == rgb[i + 1]) {
			count++;
			rgb[i + 1] = getColor(rgb[i], rgb[i + 2]);
		}
	}

	cout << count << endl;
	for (int i = 0; i < rgb.size() - 1; i++) {
		cout << rgb[i];
	}
	cout << endl;	
	return 0;
}

