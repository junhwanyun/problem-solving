#include <iostream>

using namespace std;

int result;

int arr[100];
int a[100];

void solve(int b) {
  if(arr[b] == 99 || a[b] == 99) {
    result = 1;

    return;
  }

  if(arr[b]) {
    solve(arr[b]);
  }

  if(a[b]) {
    solve(a[b]);
  }
}

int main() {
  for(int t = 1; t <= 10; t++) {
    result = 0;

    for(int i = 0; i < 100; i++) {
      arr[i] = a[i] = 0;
    }

    cin >> t;

    int length;

    cin >> length;

    int begin;
    int end;

    for(int i = 0; i < length; i++) {
      cin >> begin >> end;

      if(arr[begin]) {
        a[begin] = end;
      }else {
        arr[begin] = end;
      }
    }

    solve(0);

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
