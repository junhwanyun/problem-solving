#include <iostream>

using namespace std;

int T, N, K;
int result;

int main() {
  cin >> T;

  for(int x = 1; x <= T; x++) {
    cin >> N >> K;

    if(N % K == 0) {
      result = 0;
    }else {
      result =1;
    }

    cout << '#' << x << ' ' << result << '\n';
  }
  
  return 0;
}
