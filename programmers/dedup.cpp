#include <vector>
#include <iostream>

using namespace std;

//https://programmers.co.kr/learn/courses/30/lessons/12906

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;    
    
    for (auto const& i: arr) {
        if (answer.empty() || answer.back() != i) {            
            answer.push_back(i);
        } 
    }
    return answer;
}