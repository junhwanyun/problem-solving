#include <iostream>

using namespace std;

int T, N, K;
int result;

int A[20];

void solve(int n, int s) {
  if(s > K) {
    return;
  }

  if(s == K) {
    result++;

    return;
  }

  for(int i = n + 1; i < N; i++) {
    solve(i, s + A[i]);
  }
}

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    result = 0;

    cin >> N >> K;

    for(int i = 0; i < N; i++) {
      cin >> A[i];
    }

    for(int i = 0; i < N; i++) {
      solve(i, A[i]);
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
