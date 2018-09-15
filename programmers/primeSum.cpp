//https://programmers.co.kr/learn/courses/30/lessons/14406
#include <vector>

using namespace std;

long long solution(int N) {
    vector<int> d(N + 1, 0);    
    long long sum = 0;
    
    for(int i = 2; i <= N; i++) {
        if (d[i] == 1) {
            continue;
        }
        sum += i;
        for (int j = i; j <= N; j+= i) {
            d[j] = 1;
        }
    }    
    return sum;
}