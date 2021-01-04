#include <iostream>

using namespace std;

int N;
int result;

int main() {
  cin >> N;
  
  while(N) {
    result += N % 10;

    N /= 10;
  }

  cout << result;

  return 0;
}
