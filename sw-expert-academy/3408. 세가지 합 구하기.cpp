#include <iostream>

using namespace std;

int T, N;
long long S1, S2, S3;

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    S1 = 0;
    S2 = 0;
    S3 = 0;

    cin >> N;

    S1 += N * (long long)(N + 1) / 2;
    S2 += N * (long long)N;
    S3 += N * (long long)(N + 1);

    cout << '#' << t << ' ' << S1 << ' ' << S2 << ' ' << S3 << '\n';
  }

  return 0;
}
