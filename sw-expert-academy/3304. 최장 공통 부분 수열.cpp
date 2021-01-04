#include <iostream>

using namespace std;

int T;
int result;

int arr[1001][1001];

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    string str;
    string s;

    cin >> str >> s;

    for(int i = 0; i < str.length(); i++) {
      for(int j = 0; j < s.length(); j++) {
        arr[i][j] = 0;
      }
    }

    for(int i = 0; i < str.length(); i++) {
      for(int j = 0; j < s.length(); j++) {
        if(str[i] == s[j]) {
          arr[i + 1][j + 1] = arr[i][j] + 1;
        }else {
          arr[i + 1][j + 1] = max(arr[i + 1][j], arr[i][j + 1]);
        }
      }
    }

    result = arr[str.length()][s.length()];

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
