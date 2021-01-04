#include <iostream>

using namespace std;

int T, A, B, C;
int result;

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    cin >> A >> B >> C;

    if(A < B) {
      result = C / A;
    }else {
      result = C / B;
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
