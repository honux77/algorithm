#include <iostream>
#include <cstdio>

using namespace std;

int scores[1000];

int main() {
    int c;
    cin >> c;
    for (int i = 0; i < c; i++) {
        int n, score, sum = 0, count = 0;
        cin >> n;        
        double avg;        
        for (int j = 0; j < n; j++) {
            cin >> scores[j];
            sum += scores[j];            
        }
        avg = (double) sum / n;
        for (int j = 0; j < n; j++) {
            if (scores[j] > avg) {
                count++;
            }
        }
        printf("%.3f%%\n", (double) count * 100 / n);
    }
}