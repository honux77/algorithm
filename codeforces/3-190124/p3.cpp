#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>

using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	vector<char> rgb;

	cin >> n;
	for (int i = 0; i < n; i++) {
		char c;
		cin >> c;
		rgb.push_back(c);
	}

	vector<string> comb;
	comb.push_back("RGB");
	comb.push_back("RBG");
	comb.push_back("GRB");
	comb.push_back("GBR");
	comb.push_back("BRG");
	comb.push_back("BGR");

	int mincount = 654321;
	int choice = 0;
	for (int i = 0; i < 6; i++) {
		int count = 0;
		for (int j = 0; j < rgb.size(); j++) {
			if (comb[i][j % 3] != rgb[j]) {
				count++;
			}			
		}
		//cout << comb[i] << endl;
		//cout << count << endl;
		if (count < mincount) {
			choice = i;
			mincount = count;
		}
	}

	/*
	cout << "============" << endl;
	cout << mincount << endl;
	cout << comb[choice] << endl;	
	cout << "=====answer=======" << endl;
	*/

	cout << mincount << endl;
	for (int i = 0; i < rgb.size(); i++) {
		cout << comb[choice][i % 3];
	}
	cout << endl;
	return 0;
}

