#include <iostream>

using namespace std;

int T;
int result;

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    string str;

    cin >> str;

    string s;
    string cmp;

    bool flag = false;

    for(int i = 1; i <= 10; i++) {
      s = str.substr(0, i);

      flag = true;

      for(int j = i; j < str.size(); j += i) {
        cmp = str.substr(j, i);
        
        for(int k = 0; k < cmp.length(); k++) {
          if(s[k] != cmp[k]) {
            flag = false;
            
            break;
          }
        }
      }

      if(flag) {
        result = i;

        break;
      }
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
