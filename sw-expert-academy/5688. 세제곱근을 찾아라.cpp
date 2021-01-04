#include <iostream>
#include <cmath>

using namespace std;

int T;
long long N;
int result;

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    cin >> N;

    double num = 0;

    num = pow(N, 1/3.0);

    if((int)(num * 100) % 100 == 0) {
      result = num;
    }else if((int)(num*100) % 100 == 99) {
      result = num + 0.01;
    }else {
      result = -1;
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
