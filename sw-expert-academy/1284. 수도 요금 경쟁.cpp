#include <iostream>

using namespace std;

int T, A, B, P, Q, R, S, W;
int result;

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    cin >> P >> Q >> R >> S >> W;

    A = P * W;
    B = Q;

    if(W > R) {
      B = Q + (W - R) * S;
    }

    if(A < B) {
      result = A;
    }else {
      result = B;
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
