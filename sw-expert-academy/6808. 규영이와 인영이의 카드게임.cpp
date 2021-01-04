#include <iostream>
#include <algorithm>

using namespace std;

int T;
int result, res;

int arr[9];
int a[9];
bool chk[19];

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    result = 0;
    res = 0;

    for(int i = 1; i <= 18; i++) {
      chk[i] = false;
    }

    for(int i = 0; i < 9; i++) {
      cin >> arr[i];

      chk[arr[i]] = true;
    }

    sort(arr, arr + 9, greater<int>());

    int idx = 0;

    for(int i = 1; i <= 18; i++) {
      if(!chk[i]) {
        a[idx] = i;

        idx++;
      }
    }

    int sum = 0;
    int s = 0;

    do {
      sum = 0;
      s = 0;

      for(int i = 0; i < 9; i++) {
        if(arr[i] > a[i]) {
          sum += arr[i] + a[i];
        }else {
          s += arr[i] + a[i];
        }

        if(sum > 85 || s > 85) {
          break;
        }
      }

      if(sum > s) {
        result++;
      }else {
        res++;
      }
    }while(next_permutation(a, a + 9));

    cout << '#' << t << ' ' << result << ' ' << res << '\n';
  }

  return 0;
}
