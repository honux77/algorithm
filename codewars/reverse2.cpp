#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std; 

string reverseString (string str)
{  
  reverse(str.begin(), str.end());
  return str;
}

int main() {
    cout << reverseString("hello");
    return 0;
}