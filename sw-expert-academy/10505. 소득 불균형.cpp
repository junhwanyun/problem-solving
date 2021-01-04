#include <iostream>
#include <algorithm>

using namespace std;

int T, N;
int result;

int arr[10000];

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    result = 0;

    cin >> N;

    int sum = 0;

    for(int i = 0; i < N; i++) {
      cin >> arr[i];

      sum += arr[i];
    }

    float avg = sum / (float)N;

    sort(arr, arr + N);

    for(int i = 0; i < N; i++) {
      if(arr[i] > avg) {
        break;
      }

      result++;
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
