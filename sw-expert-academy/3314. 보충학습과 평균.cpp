#include <iostream>

using namespace std;

int T;
int result;

int arr[5];

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    result = 0;

    for(int i = 0; i < 5; i++) {
      cin >> arr[i];

      if(arr[i] < 40) {
        arr[i] = 40;
      }

      result += arr[i];
    }

    result /= 5;

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
