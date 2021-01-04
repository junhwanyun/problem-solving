#include <iostream>

using namespace std;

int T, N, B, E;
int result;

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    result = 0;

    cin >> N >> B >> E;

    int x;

    for(int i = 0; i < N; i++) {
      cin >> x;

      for(int j = 0; j <= E; j++) {
        if((B - j) % x == 0 || (B + j) % x == 0) {
          result++;

	  break;
	}
      }
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
