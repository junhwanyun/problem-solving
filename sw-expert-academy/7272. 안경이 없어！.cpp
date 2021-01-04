#include <iostream>

using namespace std;

int T;
string result;

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    result = "";

    string str;
    string s;

    cin >> str >> s;

    if(str.length() == s.length()) {
      result = "SAME";

      for(int i = 0; i < s.length(); i++) {
        if(str[i] == 'B') {
          if(s[i] != 'B') {
            result = "DIFF";

            break;
          }
        }else if(str[i] == 'B' || str[i] == 'A' || str[i] == 'D' || str[i] == 'O' || str[i] == 'P' || str[i] == 'Q' || str[i] == 'R') {
          if(s[i] != 'A' && s[i] != 'D' && s[i] != 'O' && s[i] != 'P' && s[i] != 'Q' && s[i] != 'R') {
            result = "DIFF";

            break;
          }
        }else {
          if(s[i] == 'B' || s[i] == 'A' || s[i] == 'D' || s[i] == 'O' || s[i] == 'P' || s[i] == 'Q' || s[i] == 'R') {
            result = "DIFF";

            break;
          }
        }
      }
    }else {
      result = "DIFF";
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
