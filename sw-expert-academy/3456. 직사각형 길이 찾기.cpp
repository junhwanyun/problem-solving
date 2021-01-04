#include <iostream>

using namespace std;

int T;
int result;

int arr[101];

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    for(int i = 1; i <= 100; i++) {
      arr[i] = 0;
    }

    int a;
    int b;
    int c;

    cin >> a >> b >> c;

    arr[a]++;
    arr[b]++;
    arr[c]++;

    if(arr[a] % 2 == 1) {
      result = a;
    }

    if(arr[b] % 2 == 1) {
      result = b;
    }

    if(arr[c] % 2 == 1) {
      result = c;
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
