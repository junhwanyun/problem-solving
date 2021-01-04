#include <iostream>

using namespace std;

int T, N;
int result;

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    result = 0;

    cin >> N;

    int sum = 0;

    for(int i = 1; i <= N / 2; i++) {
      sum = i;

      for(int j = i + 1; sum < N; j++) {
        sum += j;

	if(sum == N) {
	  result++;
	}
      }
    }

    result++;

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
