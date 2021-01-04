#include <iostream>

using namespace std;

int P, K;
int result;

int main() {
  cin >> P >> K;

  result = 0;

  for(int i = K; i != P; i++) {
    result++;

    if(i > 999) {
      i = 0;
    }
  }

  result++;

  cout << result;

  return 0;
}
