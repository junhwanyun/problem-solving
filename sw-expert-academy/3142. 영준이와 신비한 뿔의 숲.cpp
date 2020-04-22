#include <iostream>

using namespace std;

int T;
int res, result;

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    int n;
    int m;

    cin >> n >> m;

    res = 2 * m - n;
    result = n - m;

    cout << '#' << t << ' ' << res << ' ' << result << '\n';
  }

  return 0;
}
