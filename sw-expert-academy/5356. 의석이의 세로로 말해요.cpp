#include <iostream>

using namespace std;

int T;
string result;

string arr[5];

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    result = "";

    int len = 0;

    for(int i = 0; i < 5; i++) {
      cin >> arr[i];

      if(arr[i].length() > len) {
        len = arr[i].length();
      }
    }

    for(int i = 0; i < len; i++) {
      for(int j = 0; j < 5; j++) {
        if(arr[j].length() > i) {
	  result += arr[j][i];
	}
      }
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
