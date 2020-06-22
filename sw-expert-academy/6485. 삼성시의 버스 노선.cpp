#include <iostream>

using namespace std;

int T, N, A, B, P, C;

int arr[5001];

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    for(int i = 1; i <= 5000; i++) {
      arr[i] = 0;
    }

    cin >> N;

    for(int i = 0; i < N; i++) {
      cin >> A >> B;

      for(int j = A; j <= B; j++) {
        arr[j]++;
      }
    }

    cin >> P;

    cout << '#' << t << ' ';

    for(int i = 0; i < P; i++) {
      cin >> C;

      cout << arr[C] << ' ';
    }

    cout << '\n';
  }

  return 0;
}
