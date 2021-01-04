#include <iostream>

using namespace std;

int N, M;
int result;

int main() {
  for(int t = 1; t <= 10; t++) {
    cin >> t;

    cin >> N >> M;

    result = 1;

    for(int i = 0; i < M; i++) {
      result *= N;
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
