#include <iostream>

using namespace std;

int T;
long long result;

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    result = 1;

    string str;

    cin >> str;

    int cnt = 0;

    for(int i = 0; i < str.length() - 1; i++) {
      cnt = 1;

      if(i == 0) {
	if(str[i] != str[i + 1]) {
          cnt++;
	}
      }else if(i == str.length() - 1) {
	if(str[i] != str[i - 1]) {
          cnt++;
	}
      }else {
        if(str[i] != str[i - 1] && str[i] != str[i + 1] && str[i + 1] != str[i - 1]) {
	  cnt = 3;
	}else if(str[i] == str[i - 1] || str[i] == str[i + 1] || str[i + 1] == str[i - 1]) {
	  cnt++;
	}
      }

      result *= cnt;

      result %= 1000000007;
    }

    cout << '#' << t << ' ' << result << '\n';
  }
  
  return 0;
}
