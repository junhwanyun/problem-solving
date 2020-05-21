#include <iostream>
#include <algorithm>

using namespace std;

int T, N, K;
int result;

int arr[100];

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    result = 0;

    cin >> N >> K;

    for(int i = 0; i < N; i++) {
      cin >> arr[i];
    }

    sort(arr, arr + N, greater<int>());

    for(int i = 0; i < K; i++) {
      result += arr[i];
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
