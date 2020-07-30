#include <iostream>
#include <algorithm>

using namespace std;

int T, N;
int result;

int A[10000];

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    result = 0;

    cin >> N;

    for(int i = 0; i < N; i++) {
      cin >> A[i];
    }

    sort(A, A + N);

    int left = 0;
    int right = 0;

    for(int i = 0; i < N; i++) {
      left = A[i] - right;

      result += left + 1 + A[i];

      right = A[i];
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
