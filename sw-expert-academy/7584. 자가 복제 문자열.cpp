#include <iostream>

using namespace std;

int T;
long long K;
char result;

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    cin >> K;

    while(K > 0) {
      if((K - 1) % 4 == 0) {
        result = '0';

        break;
      }else if((K - 1) % 2 == 0) {
        result = '1';

        break;
      }else {
        K /= 2;
      }
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
