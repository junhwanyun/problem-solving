#include <iostream>
#include <algorithm>

using namespace std;

int T;
int result, res;

int arr[10];

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    int num = 0;

    for(int i = 0; i < 10; i++) {
      num = 0;

      cin >> arr[i];

      while(arr[i]) {
        num += arr[i] % 10;

	arr[i] /= 10;
      }

      arr[i] = num;
    }

    sort(arr, arr + 10);

    result = arr[9];
    res = arr[0];

    cout << '#' << t << ' ' << result << ' ' << res << '\n';
  }

  return 0;
}
