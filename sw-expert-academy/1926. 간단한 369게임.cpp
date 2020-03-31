#include <iostream>

using namespace std;

int N;

int main() {
  cin >> N;

  int tmp = 0;
  int num = 0;

  bool flag = false;

  for(int i = 1; i <= N; i++) {
    tmp = i;

    flag = false;

    while(tmp) {
      num = tmp % 10;

      if(num != 0 && num % 3 == 0) {
        flag = true;

        cout << '-';
      }

      tmp /= 10;
    }

    if(!flag) {
      cout << i;
    }

    cout << ' ';
  }

  return 0;
}
