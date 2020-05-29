#include <iostream>

using namespace std;

int T;
string result[5];

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    string str;

    cin >> str;

    result[0] = ".";
    result[1] = ".";
    result[2] = "#";
    result[3] = ".";
    result[4] = ".";

    string s[5];

    s[0] = ".#..";
    s[1] = "#.#.";
    s[3] = "#.#.";
    s[4] = ".#..";
    
    for(int i = 0; i < str.length(); i++) {
      s[2] = ".";
      s[2] += str[i];
      s[2] += ".#";

      for(int j = 0; j < 5; j++) {
        result[j] += s[j];
      }
    }

    for(int i = 0; i < 5; i++) {
      cout << result[i];

      cout << '\n';
    }
  }

  return 0;
}
