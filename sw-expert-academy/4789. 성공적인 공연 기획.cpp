#include <iostream>

using namespace std;

int T;
int result;

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    result = 0;

    string str;

    cin >> str;

    int cur = 0;

    for(int i = 0; i < str.length(); i++) {
      if(i > cur) {
        result += i - cur;
        
        cur += i - cur;
      }

      cur += str[i] - '0';
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
