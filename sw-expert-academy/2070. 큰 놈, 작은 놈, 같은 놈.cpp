#include <iostream>

using namespace std;

int T;
int N, M;
char result;

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    cin >> N >> M;

    if(N < M) {
      result = '<';
    }else if(N == M) {
      result = '=';
    }else {
      result = '>';
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
