#include <string>
#include <vector>
#include <iostream>

using namespace std; 

string reverseString (string str)
{
  vector<char> v;
  
  for (auto &c:str) {
    v.insert(v.begin(), c);
  }
  
  return string(v.begin(), v.end());
}

int main() {
    cout << reverseString("hello");
    return 0;
}