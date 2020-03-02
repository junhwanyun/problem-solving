#include <iostream>

using namespace std;

int N;
int result;

int main() {
  cin >> N;

  result = 1;

  for(int i = 1; i <= N; i++) {
    cout << result << ' ';

    result *= 2;
  }

  cout << result;

  return 0;
}
