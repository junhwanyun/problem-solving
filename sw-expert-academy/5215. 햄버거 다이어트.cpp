#include <iostream>

using namespace std;

int T, N, L;
int result;

int arr[20][2];

void solve(int n, int t, int k) {
  if(t > result) {
    result = t;
  }

  for(int i = n + 1; i < N; i++) {
    if(k + arr[i][1] <= L) {
      solve(i, t + arr[i][0], k + arr[i][1]);
    }
  }
}

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    result = 0;

    cin >> N >> L;

    for(int i = 0; i < N; i++) {
      cin >> arr[i][0] >> arr[i][1];
    }

    for(int i = 0; i < N; i++) {
      if(arr[i][1] <= L) {
	solve(i, arr[i][0], arr[i][1]);
      }
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
