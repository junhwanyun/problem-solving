#include <iostream>

using namespace std;

int T;
string result;

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    result = "";

    string str;

    for(int i = 0; i < 3; i++) {
      cin >> str;

      result += str[0] - 'a' + 'A';
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
