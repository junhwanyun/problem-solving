#include <iostream>
#include <algorithm>

using namespace std;

int T, N;
int result;

int arr[1000];

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    result = 0;

    cin >> N;

    for(int i = 0; i < N; i++) {
      cin >> arr[i];
    }

    int m = 0;
    int r = 0;

    bool flag = true;

    for(int i = 0; i < N - 1; i++) {
      for(int j = i + 1; j < N; j++) {
        m = arr[i] * arr[j];

        flag = true;

        while(m > 0) {
          r = m % 10;

          m /= 10;

          if(m % 10 > r) {
            flag = false;

            break;
          }
        }

        if(flag && arr[i] * arr[j] > result) {
          result = arr[i] * arr[j];
        }
      }
    }

    if(result == 0) {
      result = -1;
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
