#include <iostream>

using namespace std;

int N;

int main() {
  cin >> N;

  for(int i = 1; i <= N; i++) {
    if(N % i == 0) {
      cout << i << ' ';
    }
  }

  return 0;
}
