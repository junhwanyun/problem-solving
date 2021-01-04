#include <iostream>

using namespace std;

int T, N;
long long result;

long long arr[101];

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    cin >> N;

    arr[1] = 1;
    arr[2] = 1;
    arr[3] = 1;
    arr[4] = 2;
    arr[5] = 2;

    for(int i = 6; i <= N; i++) {
      arr[i] = arr[i - 1] + arr[i - 5];
    }

    result = arr[N];

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
