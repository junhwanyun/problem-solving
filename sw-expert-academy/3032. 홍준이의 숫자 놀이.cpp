#include <iostream>

using namespace std;

int T, A, B;

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    cin >> A >> B;

    int x;
    int y;
    int X;
    int Y;

    x = 1;
    y = 0;
    X = 0;
    Y = 1;

    while(A > 1 && B > 1) {
      x -= A / B * X;
      y -= A / B * Y;

      A %= B;

      X -= B / A * x;
      Y -= B / A * y;

      B %= A;
    }

    cout << '#' << t << ' ';

    if(A == 1) {
      cout << x << ' ' << y;
    }else if(B == 1) {
      cout << X << ' ' << Y;
    }else {
      cout << -1;
    }

    cout << '\n';
  }

  return 0;
}
