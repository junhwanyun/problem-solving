#include <iostream>

using namespace std;

int TC, N;
int result;

int arr[1000];

int main() {
  cin >> TC;

  for(int t = 1; t <= TC; t++) {
    result = 0;

    cin >> N;

    for(int i = 0; i < N; i++) {
      cin >> arr[i];
    }

    int num = 0;
    int n = 0;

    bool flag = false;

    for(int i = 0; i < N - 1; i++) {
      for(int j = i + 1; j < N; j++) {
        num = arr[i] * arr[j];

        flag = true;

        while(num / 10 > 0) {
          n = num % 10;

          num /= 10;

          if(num % 10 + 1 != n) {
            flag = false;

            break;
          }
        }

        if(flag && arr[i] * arr[j] > result) {
          result = arr[i] * arr[j];

          break;
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
