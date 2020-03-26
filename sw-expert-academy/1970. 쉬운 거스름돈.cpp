#include <iostream>

using namespace std;

int T, N;
int result;

int arr[8] = {50000, 10000, 5000, 1000, 500, 100, 50, 10};

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    cin >> N;

    cout << '#' << t << '\n';

    for(int i = 0; i < 8; i++) {
      result = 0;

      while(N >= arr[i]) {
        result++;

	N -= arr[i];
      }

      cout << result << ' ';
    }

    cout << '\n';
  }

  return 0;
}
