#include <iostream>

using namespace std;

int T, D, A, B;
int result = 0;

bool arr[1000000];

int main() {
  cin >> T;

  for(int i = 2; i < 1000000; i++) {
    arr[i] = true;
  }

  for(int i = 2; i < 1000; i++) {
    if(arr[i]) {
      for(int j = i * i; j < 1000000; j += i) {
        arr[j] = false;
      }
    }
  }

  for(int t = 1; t <= T; t++) {
    result = 0;

    cin >> D >> A >> B;

    int num = 0;

    for(int i = A; i <= B; i++) {
      if(arr[i]) {
        num = i;

        while(num > 0) {
          if(num % 10 == D) {
            result++;

            break;
          }

          num /= 10;
        }
      }
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
