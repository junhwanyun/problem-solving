#include <iostream>

using namespace std;

int T;
string result;

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    result = "";

    string str;

    cin >> str;

    for(int i = str.length() - 1; i >= 0; i--) {
      switch(str[i]) {
        case 'b':
          result += 'd';
          break;
        case 'd':
          result += 'b';
          break;
        case 'p':
          result += 'q';
          break;
        default:
          result += 'p';
          break;
      }
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}