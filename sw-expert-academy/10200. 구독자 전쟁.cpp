#include <iostream>

using namespace std;

int T, N, A, B;
int result, res;

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    cin >> N >> A >> B;

    result = min(A, B);
    res = A + B - N;

    if(res < 0) {
      res = 0;
    }

    cout << '#' << t << ' ' << result << ' ' << res << '\n';
  }

  return 0;
}
