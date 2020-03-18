#include <iostream>

using namespace std;

int N;

char arr[101];

void solve(int n) {
  if(2 * n <= N) {
    solve(2 * n);
  }

  cout << arr[n];

  if(2 * n + 1 <= N) {
    solve(2 * n + 1);
  }
}

int main() {
  for(int t = 1; t <= 10; t++) {
    cin >> N;

    int left;
    int right;

    for(int i = 1; i <= N; i++) {
      cin >> i >> arr[i];

      if(2 * i == N) {
        cin >> left;
      }

      if(2 * i < N) {
        cin >> left >> right;
      }
    }

    cout << '#' << t << ' ';

    solve(1);

    cout << '\n';
  }

  return 0;
}
