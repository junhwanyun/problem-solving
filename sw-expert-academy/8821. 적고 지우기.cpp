#include <iostream>

using namespace std;

int T;
int result;

bool arr[10];

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    result = 0;

    for(int i = 0; i < 10; i++) {
      arr[i] = false;
    }

    string str;

    cin >> str;

    for(int i = 0; i < str.length(); i++) {
      arr[str[i] - '0'] = !arr[str[i] - '0'];
    }

    for(int i = 0; i < 10; i++) {
      if(arr[i]) {
        result++;
      }
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
