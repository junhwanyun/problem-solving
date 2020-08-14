#include <iostream>

using namespace std;

int TC, N;
int result;

int main() {
  cin >> TC;

  for(int t = 1; t <= TC; t++) {
    result = 0;

    cin >> N;

    string str;
    string s;

    cin >> str;
    cin >> s;

    for(int i = 0; i < N; i++) {
      if(str[i] == s[i]) {
        result++;
      }
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
