#include <iostream>

using namespace std;

int T, N, Q, L, R;
int result[1001];

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    for(int i = 1; i <= 1000; i++) {
      result[i] = 0;
    }

    cin >> N >> Q;

    for(int i = 1; i <= Q; i++) {
      cin >> L >> R;

      for(int j = L; j <= R; j++) {
        result[j] = i;
      }
    }

    cout << '#' << t << ' ';

    for(int i = 1; i <= N; i++) {
      cout << result[i] << ' ';
    }

    cout << '\n';
  }

  return 0;
}
