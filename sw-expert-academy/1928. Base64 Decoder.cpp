#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int T;
string result;

string str = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    result = "";

    string s;

    cin >> s;

    vector<int> v;

    for(int i = 0; i < s.length(); i += 4) {
      int num = 0;

      for(int j = i; j < i + 4; j++) {
        for(int k = 0; k < 64; k++) {
          if(str[k] == s[j]) {
            num = k;

            break;
          }
        }

        for(int k = 0; k < 6; k++) {
          v.push_back(num % 2);

          num /= 2;
        }

        reverse(v.begin() + j * 6, v.begin() + j * 6 + 6);
      }
    }
    
    int n = 0;
    int power = 0;

    for(int i = 0; i < v.size(); i += 8) {
      n = 0;
      power = 1;
        
      reverse(v.begin() + i, v.begin() + i + 8);

      for(int j = i; j < i + 8; j++) {
        n += power * v[j];

        power *= 2;
      }

      result += n;
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
