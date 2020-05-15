#include <iostream>

using namespace std;

string S;
char T, X, Y;
string result;
int res, answer, ans, r;

int arrS[14];
int arrD[14];
int arrH[14];
int arrC[14];

int main() {
  int testCase;

  cin >> testCase;

  for(int t = 1; t <= testCase; t++) {
    result = "";
    res = 0;
    answer = 0;
    ans = 0;
    r = 0;

    for(int i = 1; i < 14; i++) {
      arrS[i] = 0;
      arrD[i] = 0;
      arrH[i] = 0;
      arrC[i] = 0;
    }

    cin >> S;

    string str;

    int num = 0;

    for(int i = 0; i < S.size(); i += 3) {
      str = "";

      T = S[i];
      X = S[i + 1];
      Y = S[i + 2];

      str += X;
      str += Y;

      num = stoi(str);

      switch(T) {
        case 'S':
          arrS[num]++;

          if(arrS[num] > 1) {
            result = "ERROR";
          }

          break;
        case 'D':
          arrD[num]++;

          if(arrD[num] > 1) {
            result = "ERROR";
          }

          break;
        case 'H':
          arrH[num]++;

          if(arrH[num] > 1) {
            result = "ERROR";
          }

          break;
        case 'C':
          arrC[num]++;

          if(arrC[num] > 1) {
            result = "ERROR";
          }

          break;
      }

      if(result == "ERROR") {
        break;
      }
    }

    cout << '#' << t << ' ';

    if(result == "") {
      for(int i = 1; i < 14; i++) {
        if(arrS[i] == 0) {
          res++;
        }

        if(arrD[i] == 0) {
          answer++;
        }

        if(arrH[i] == 0) {
          ans++;
        }

        if(arrC[i] == 0) {
          r++;
        }
      }

      cout << res << ' ' << answer << ' ' << ans << ' ' << r;
    }else {
      cout << result;
    }

    cout << '\n';
  }

  return 0;
}
