#include <iostream>

using namespace std;

int T, N, M;
int result;

int arr[41];

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    result = 0;

    for(int i = 0; i < 41; i++) {
      arr[i] = 0;
    }

    cin >> N >> M;

    for(int i = 1; i <= N; i++) {
      for(int j = 1; j <= M; j++) {
        arr[i + j]++;
      }
    }

    for(int i = 2; i <= N + M; i++) {
      if(arr[i] > result) {
        result = arr[i];
      }
    }

    cout << '#' << t << ' ';

    for(int i = 2; i <= N + M; i++) {
      if(arr[i] == result) {
        cout << i << ' ';
      }
    }
    cout << '\n';
  }

  return 0;
}
