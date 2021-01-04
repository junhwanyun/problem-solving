#include <iostream>

using namespace std;

int T, N;

int arr[10][10];

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    cin >> N;

    for(int i = 0; i < N; i++) {
      arr[i][0] = 1;
      
      for(int j = 0; j < i; j++) {
        arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
      }

      arr[i][i] = 1;
    }

    cout << '#' << t <<'\n';

    for(int i = 0; i < N; i++) {
      for(int j = 0; j <= i; j++) {
        cout << arr[i][j] << ' ';
      }

      cout << '\n';
    }
  }

  return 0;
}
