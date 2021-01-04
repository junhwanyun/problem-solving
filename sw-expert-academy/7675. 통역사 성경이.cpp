#include <iostream>

using namespace std;

int T, N;
int result[5];

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    for(int i = 0; i < 5; i++) {
      result[i] = 0;
    }

    cin >> N;

    string str;

    int cnt = 0;

    bool flag = false;

    while(cnt < N) {
      cin >> str;

      int len = str.length();

      flag = false;

      if(isupper(str[0])) {
        flag = true;
      }

      if(flag) {
        for(int i = 1; i < len; i++) {
          if(!islower(str[i]) && !(i == len - 1 && str[len - 1] == '.' || str[len - 1] == '?' || str[len - 1] == '!')) {
            flag = false;

            break;
          }
        } 
      }

      if(flag) {
        result[cnt]++;
      }

      if(str[len - 1] == '.' || str[len - 1] == '?' || str[len - 1] == '!') {
        cnt++;
      }
    }

    cout << '#' << t << ' ';

    for(int i = 0; i < N; i++) {
      cout << result[i] << ' ';
    }

    cout << '\n';
  }

  return 0;
}
