#include <iostream>

using namespace std;

int T, L, U, X;
int result;

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    cin >> L >> U >> X;

    if(X < L) {
      result = L - X;
    }else if(X <= U) {
      result = 0;
    }else {
      result = -1;
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
