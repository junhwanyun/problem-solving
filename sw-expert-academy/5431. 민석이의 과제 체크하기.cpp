#include <iostream>

using namespace std;

int T, N, K;

bool arr[101];

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    for(int i = 1; i <= 100; i++) {
      arr[i] = false;
    }

    cin >> N >> K;

    int num = 0;

    for(int i = 0; i < K; i++) {
      cin >> num;

      arr[num] = true;
    }

    cout << '#' << t << ' ';

    for(int i = 1; i <= N; i++) {
      if(!arr[i]) {
        cout << i << ' ';
      }
    }

    cout << '\n';
  }

  return 0;
}
