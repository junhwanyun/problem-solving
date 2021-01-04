#include <iostream>

using namespace std;

int T;
int result;

int arr[267][267];

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    int p;
    int q;

    cin >> p >> q;

    int begin = 0;
    int sub = 0;

    begin = 1;

    int px = 0;
    int py = 0;
    int qx = 0;
    int qy = 0;

    for(int i = 1; i <= 266; i++) {
      begin += i - 1;
      sub = i;

      for(int j = 1; j <= 266; j++) {
        if(j == 1) {
          arr[i][j] = begin;
        }else {
          arr[i][j] = arr[i][j - 1] + sub + j - 1;
        }

        if(arr[i][j] == p) {
          px = j;
          py = i;            
        }

        if(arr[i][j] == q) {
          qx = j;
          qy = i;
        }

        if(px != 0 && py != 0 && qx != 0 && qy != 0) {
          if(arr[py + qy][px + qx] != 0) {
            result = arr[py + qy][px + qx];

            break;
          }
        }
      }
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
