#include <iostream>

using namespace std;

int T, X1, Y1, X2, Y2, N;
int result, res, r;

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    result = 0;
    res = 0;
    r = 0;

    cin >> X1 >> Y1 >> X2 >> Y2;

    cin >> N;

    int x;
    int y;

    for(int i = 0; i < N; i++) {
      cin >> x >> y;

      if(x > X1 && x < X2 && y > Y1 && y < Y2) {
        result++;
      }else if(x < X1 || x > X2 || y < Y1 || y > Y2) {
        r++;
      }else {
        res++;
      }
    }

    cout << '#' << t << ' ' << result << ' ' << res << ' ' << r << '\n';
  }

  return 0;
}
