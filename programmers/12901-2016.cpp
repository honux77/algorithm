#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(int m, int d) {
    vector <string> week {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
    vector <int> mdays {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30}; //1 ~ 11
    int tot = 0;
    for (int i = 1; i < m; i++) {
        tot += mdays[i];
    }    
    tot += d;
    return week[(tot + 4) % 7];
}

int main() {
	cout << solution(1, 1) << endl; //FRI
	cout << solution(5, 24) << endl; //TUE
	return 0;
}
