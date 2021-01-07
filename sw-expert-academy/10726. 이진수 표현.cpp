#include <iostream>

using namespace std;

int TC, N, M;
string result;

int main() {
  cin >> TC;

  for(int t = 1; t <= TC; t++) {
    result = "ON";

    cin >> N >> M;
    
    for(int i = 0; i < N; i++) {
      if(M % 2 == 0) {
        result = "OFF";

        break;
      }

      M /= 2;
    }
    
    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
