#include <iostream>
#include <cmath>

using namespace std;

int T, A, B;
int result;

bool arr[1000];

int main() {
  cin >> T;

  for(int i = 1; i * i < 1000; i++) {
    arr[i * i] = true;
  }

  for(int t = 1; t <= T; t++) {
    result = 0;

    cin >> A >> B;

    string str;
    string s;

    int temp = 0;

    for(int i = A; i <= B; i++) {
      if(arr[i]) {
        str = to_string(i);
        s = "";

        for(int j = str.length() - 1; j >= 0; j--) {
          s += str[j];
        }

        if(str == s) {
          temp = sqrt(i);

          str = to_string(temp);
          s = "";

          for(int j = str.length() - 1; j >= 0; j--) {
            s += str[j];
          }

          if(str == s) {
            result++;
          }
        }
      }
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
