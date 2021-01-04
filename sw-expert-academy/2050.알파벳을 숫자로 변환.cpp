#include <iostream>
#include <string>

using namespace std;

string str;

int main() {
  cin >> str;

  for(int i = 0; i < str.length(); i++) {
    if(str[i] >= 'A' && str[i] <= 'Z') {
      cout << str[i] - 'A' + 1 << ' ';
    }else {
      cout << str[i] - 'a' + 1 << ' ';
    }
  }

  return 0;
}
