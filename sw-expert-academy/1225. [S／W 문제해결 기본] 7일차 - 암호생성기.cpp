#include <iostream>

using namespace std;

int main() {
  for(int t = 1; t <= 10; t++) {
    cin >> t;

    int arr[8] = {0, };

    for(int i = 0; i < 8; i++) {
      cin >> arr[i];
    }

    int cnt = 1;

    while(arr[7]) {
      int temp = arr[0] - cnt;

      for(int i = 1; i < 8; i++) {
        arr[i - 1] = arr[i];
      }

      arr[7] = temp;

      if(arr[7] < 0) {
        arr[7] = 0;
      }

      cnt++;

      if(cnt > 5) {
        cnt = 1;
      }
    }

    cout << '#' << t << ' ';

    for(int i = 0; i < 8; i++) {
      cout << arr[i] << ' ';
    }

    cout << '\n';
  }

  return 0;
}
