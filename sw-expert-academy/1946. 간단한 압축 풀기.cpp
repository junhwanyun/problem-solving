#include <iostream>

using namespace std;

int T, N, K;
char C;

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    cin >> N;

    cout << '#' << t << '\n';

    int cnt = 0;

    for(int i = 0; i < N; i++) {
      cin >> C >> K;

      for(int j = 0; j < K; j++) {
        cout << C;

	cnt++;

	if(cnt % 10 == 0) {
	  cout << '\n';
	}
      }
    }

    cout << '\n';
  }

  return 0;
}
