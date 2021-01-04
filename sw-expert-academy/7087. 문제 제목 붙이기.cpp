#include <iostream>

using namespace std;

int T, N;
int result;

bool arr[26];

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    result = 0;

    for(int i = 0; i < 26; i++) {
      arr[i] = false;
    }

    cin >> N;

    string str;

    for(int i = 0; i < N; i++) {
      cin >> str;

      arr[str[0] - 'A'] = true;
    }

    for(int i = 0; i < 26; i++) {
      if(!arr[i]) {
        break;
      }

      result++;
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
