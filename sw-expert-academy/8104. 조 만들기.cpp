#include <iostream>

using namespace std;

int T, N, K;
int result[20];

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    for(int i = 0; i < 20; i++) {
      result[i] = 0;
    }

    cin >> N >> K;

    for(int i = 0; i < N; i++) {
      for(int j = 1; j <= K; j++) {
        if(i % 2 == 0) {
          result[j - 1] += i * K + j;
        }else {
          result[K - j] += i * K + j;
        }
      }
    }

    cout << '#' << t << ' ';

    for(int i = 0; i < K; i++) {
      cout << result[i] << ' ';
    }

    cout << '\n';
  }

  return 0;
}
