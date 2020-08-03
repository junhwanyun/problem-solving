#include <iostream>
#include <cmath>

using namespace std;

int T, K;
int result;

int A[1024];

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    result = 0;

    cin >> K;

    for(int i = 0; i < pow(2, K); i++) {
      cin >> A[i];
    }

    int vs = 0;

    vs = 1;

    while(vs < pow(2, K)) {
      for(int i = 0; i < pow(2, K); i += vs * 2) {
        result += abs(A[i + vs] - A[i]);

	if(A[i + vs] > A[i]) {
	  A[i] = A[i + vs];
	}
      }

      vs *= 2;
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
