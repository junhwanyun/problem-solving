#include <iostream>

using namespace std;

int T, a, b;

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    cin >> a >> b;

    cout << '#' << t << ' ' << a / b << ' ' << a % b << '\n';
  }

  return 0;
}
