#include <iostream>

using namespace std;

int T, N;
string X;
long long result;

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    result = 0;

    cin >> N >> X;

    for(int i = X.length() - 1; i >= 0; i--) {
      result += X[i] - '0';
    }

    result %= N - 1;

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
