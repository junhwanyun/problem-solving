#include <iostream>

using namespace std;

int T;
int result, res;

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    result = 0;
    res = 1;

    string str;

    cin >> str;

    int idx = 0;

    idx = str.length() - 1;

    if(str[idx] == 'h') {
      result = 0;

      idx -= 5;
    }else {
      result = 90;

      idx -= 4;
    }

    while(idx >= 0) {
      result *= 2;

      if(str[idx] == 'h') {
        result -= 90;

	idx -= 5;
      }else {
        result += 90;

	idx -= 4;
      }

      res *= 2;
    }

    while(result % 2 == 0 && res % 2 == 0) {
      result /= 2;
      res /= 2;
    }

    cout << '#' << t << ' ';

    cout << result;

    if(res > 1) {
      cout << '/' << res;
    }

    cout << '\n';
  }

  return 0;
}
