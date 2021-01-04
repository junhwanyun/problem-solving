#include <iostream>

using namespace std;

int T, N;
long long result, res;

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    cin >> N;

    result = (long long)2 * N * N - (long long)4 * N + 3;

    res = (long long)2 * N * N - 1;

    cout << '#' << t << ' ' << result << ' ' << res << '\n';
  }

  return 0;
}
