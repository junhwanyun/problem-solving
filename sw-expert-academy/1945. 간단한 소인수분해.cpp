#include <iostream>

using namespace std;

int T, N;
int a, b, c, d, e;

int arr[5] = {2, 3, 5, 7, 11};

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    a = 0;
    b = 0;
    c = 0;
    d = 0;
    e = 0;

    cin >> N;

    while(N % 2 == 0) {
      a++;

      N /= 2;
    }

    while(N % 3 == 0) {
      b++;

      N /= 3;
    }

    while(N % 5 == 0) {
      c++;

      N /= 5;
    }

    while(N % 7 == 0) {
      d++;

      N /= 7;
    }

    while(N % 11 == 0) {
      e++;

      N /= 11;
    }

    cout << '#' << t << ' ' << a << ' ' << b << ' ' << c << ' ' << d << ' ' << e << '\n';
  }

  return 0;
}
