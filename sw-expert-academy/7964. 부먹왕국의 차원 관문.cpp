#include <iostream>

using namespace std;

int T, N, D;
int result;

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    result = 0;

    cin >> N >> D;

    int cur = 0;

    int d = 0;

    for(int i = 0; i < N; i++) {
      cin >> cur;

      if(cur == 1) {
        d = 0;
      }else {
        d++;

	if(d == D) {
	  result++;

	  d = 0;
	}
      }
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
