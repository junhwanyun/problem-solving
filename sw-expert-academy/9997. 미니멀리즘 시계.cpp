#include <iostream>

using namespace std;

int T;
int result, res;

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    int theta;

    cin >> theta;

    result = theta / 30;

    res = theta % 30 * 2;

    cout << '#' << t << ' ' << result << ' ' << res << '\n';
  }

  return 0;
}
