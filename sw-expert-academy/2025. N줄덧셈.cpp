#include <iostream>

using namespace std;

int N;
int result;

int main() {
  cin >> N;

  result = 0;

  for(int i = 1; i <= N; i++) {
    result += i;
  }

  cout << result;
  
  return 0;
}
