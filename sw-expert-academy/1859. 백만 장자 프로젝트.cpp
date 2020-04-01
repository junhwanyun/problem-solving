#include <iostream>

using namespace std;

int T, N;
long long result;

int arr[1000000];

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    result = 0;

    cin >> N;

    for(int i = 0; i < N; i++) {
      cin >> arr[i];
    }

    int max = 0;

    for(int i = N - 1; i >= 0; i--) {
      if(arr[i] > max) {
        max = arr[i];
      }else {
        result += max - arr[i];
      }
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
