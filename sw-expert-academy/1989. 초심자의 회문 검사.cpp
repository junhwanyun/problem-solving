#include <iostream>

using namespace std;

int T;
int result;

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    result = 1;

    string str;

    cin >> str;

    for(int i = 0; i < str.length() / 2; i++) {
      if(str[i] != str[str.length() - 1 - i]) {
        result = 0;

	break;
      }
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
