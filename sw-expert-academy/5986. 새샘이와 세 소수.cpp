#include <iostream>

using namespace std;

int T, N;
int result;

bool arr[1000];

int main() {
  cin >> T;
  
  for(int i = 2; i < 1000; i++) {
    arr[i] = true;
  }

  for(int i = 2; i < 32; i++) {
    if(arr[i]) {
      for(int j = i * i; j < 1000; j += i) {
        arr[j] = false;
      }
    }
  }

  for(int t = 1; t <= T; t++) {
    result = 0;

    cin >> N;

    int x;
    int y;
    int z;

    for(x = 2; x < 1000; x++) {
      if(x * 3 > N) {
        break;
      }

      if(arr[x]) {
        for(y = x; y < 1000; y++) {
          if(x + y * 2 > N) {
            break;
          }

          if(arr[y]) {
            z = N - x - y;

            if(z < y) {
              break;
            }

            if(arr[z]) {
              result++;
            }
          }
        }
      }
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
