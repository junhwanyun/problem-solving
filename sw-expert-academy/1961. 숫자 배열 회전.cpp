#include <iostream>

using namespace std;

int T, N;

int arr[7][7];

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    cin >> N;

    for(int i = 0; i < N; i++) {
      for(int j = 0; j < N; j++) {
        cin >> arr[i][j];
      }
    }

    cout << '#' << t << '\n';

    for(int i = 0; i < N; i++) {
      for(int j = 0; j < N; j++) {
        cout << arr[N - 1 - j][i];
      }

      cout << ' ';

      for(int j = 0; j < N; j++) {
        cout << arr[N - 1 - i][N - 1 - j];
      }

      cout << ' ';

      for(int j = 0; j < N; j++) {
        cout << arr[j][N - 1 - i];
      }

      cout << '\n';
    }
  }

  return 0;
}
