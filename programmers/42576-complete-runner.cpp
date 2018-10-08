#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
	string answer = "";    
	unordered_map<string, int> cmap;    
	for (auto p: completion) {
		if (cmap.find(p) != cmap.end()) {
			cmap[p]++;
		} else {
			cmap[p] = 1;
		}
	}

	for (auto p: participant) {
		if ( cmap.find(p) == cmap.end() || cmap[p] == 0) { 
			return p;
		} 
		cmap[p]--;
	}    
	//can't reach here by condtion
	return "Teemo";
}
