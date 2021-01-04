#include <iostream>

using namespace std;

int A, B;
char result;

int main() {
  cin >> A >> B;

  if(A - B == 1 || A - B == -2) {
    result = 'A';
  }else {
    result = 'B';
  }

  cout << result;

  return 0;
}
