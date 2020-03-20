#include <iostream>

using namespace std;

int T, N;
int result;

bool arr[10];

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    for(int i = 0; i < 10; i++) {
      arr[i] = false;
    }

    cin >> N;

    int cnt = 0;

    int temp = 0;

    bool flag = false;

    while(1) {
      cnt++;

      temp = N * cnt;

      while(temp) {
        arr[temp % 10] = true;
	
	temp /= 10;
      }

      flag = true;

      for(int i = 0; i < 10; i++) {
        if(!arr[i]) {
	  flag = false;

	  break;
	}
      }

      if(flag) {
	result = N * cnt;
        break;
      }
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
