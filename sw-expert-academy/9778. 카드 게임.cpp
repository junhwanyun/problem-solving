#include <iostream>

using namespace std;

int TC, N;
string result;

int arr[12];

int main() {
  cin >> TC;

  for(int t = 1 ; t <= TC; t++) {
    for(int i = 1; i <= 11; i++) {
      arr[i] = 4;
    }

    arr[10] = 16;

    cin >> N;

    int val = 0;
    int cur = 0;

    for(int i = 0; i < N; i++) {
      cin >> val;

      cur += val;

      arr[val]--;
    }

    int gt = 0;
    int lte = 0;

    for(int i = 1; i <= 11; i++) {
      if(cur + i > 21) {
        gt += arr[i];
      }else {
        lte += arr[i];
      }
    }

    if(gt >= lte) {
      result = "STOP";
    }else {
      result = "GAZUA";
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
