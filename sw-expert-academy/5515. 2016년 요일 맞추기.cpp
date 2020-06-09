#include <iostream>

using namespace std;

int T;
int result;

int arr[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    result = 4;

    int m;
    int d;

    cin >> m >> d;

    for(int i = 1; i < m; i++) {
      result += arr[i];
    }

    result += d - 1;

    result %= 7;

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
