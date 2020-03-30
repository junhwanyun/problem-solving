#include <iostream>

using namespace std;

int T, N;
int result;

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    result = 0;

    cin >> N;

    for(int i = 1; i <= N; i++) {
      if(i % 2 == 1) {
        result += i;
      }else {
        result -= i;
      }
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
