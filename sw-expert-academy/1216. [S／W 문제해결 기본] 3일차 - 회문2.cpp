#include <iostream>
#include <string>

using namespace std;

int result;

string arr[100];

int main() {
  for(int t = 1; t <= 10; t++) {
    cin >> t;

    result = 0;

    for(int i = 0; i < 100; i++) {
      cin >> arr[i];
    }

    for(int i = 100; i >= 1; i--) {
      for(int j = 0; j < 100; j++) {
        bool flagR = false;
        bool flagC = false;

        for(int k = 0; k <= 100 - i; k++) {
          flagR = true;
          flagC = true;

          for(int l = 0; l < i / 2; l++) {
            if(arr[j][k + l] != arr[j][k + i - 1 - l]) {
              flagR = false;
            }

            if(arr[k + l][j] != arr[k + i - 1 - l][j]) {
              flagC = false;
            }
          }

          if(flagR || flagC) {
            result = i;

            break;
          }
        }

        if(result) {
          break;
        }
      }

      if(result) {
        break;
      }
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
