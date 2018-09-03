//https://www.acmicpc.net/problem/1546
//Get average of scores

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int n, maxScore  = 0;
    float avg, sum = 0;    
    vector<int> scores;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int c;
        cin >> c;
        scores.push_back(c);
        maxScore = max(c, maxScore);
    }

    for (int i = 0; i < n; i++) {
        sum += (float) scores[i] / maxScore * 100;
    }

    cout << (sum / n) << endl;

    return 0;
}