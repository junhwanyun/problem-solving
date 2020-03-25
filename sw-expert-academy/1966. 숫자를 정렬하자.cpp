#include <iostream>
#include <algorithm>

using namespace std;

int T, N;

int arr[50];

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    cin >> N;

    for(int i = 0; i < N; i++) {
      cin >> arr[i];
    }

    sort(arr.begin(), arr.begin() + N);

    cout << '#' << t << ' ';

    for(int i = 0; i < N; i++) {
      cout << arr[i] << ' ';
    }

    cout << '\n';
  }

  return 0;
}
