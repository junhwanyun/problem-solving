#include <iostream>

using namespace std;

int T, N;
int result, res;

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    result = 0;
    res = 0;

    cin >> N;

    int height = 0;

    cin >> height;

    int cur = 0;
    
    for(int i = 1; i < N; i++) {
      cin >> cur;

      if(height - cur > res) {
        res = height - cur;
      }

      if(cur - height > result) {
        result = cur - height;
      }

      height = cur;
    }

    cout << '#' << t << ' ' << result << ' ' << res << '\n';
  }

  return 0;
}
