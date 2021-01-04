#include <iostream>

using namespace std;

int T;
int result;

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    result = 0;    

    int num;

    for(int i = 0; i < 10; i++) {
      cin >> num;

      result += num;
    }

    result = result / 10.0 + 0.5;

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
