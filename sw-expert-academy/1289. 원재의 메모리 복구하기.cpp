#include <iostream>

using namespace std;

int T;
int result;

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    result = 0;

    string str;

    cin >> str;

    string s;

    s = "";

    for(int i = 0; i < str.length(); i++) {
      s += '0';
    }

    for(int i = 0; i < s.size(); i++) {
      if(s[i] != str[i]) {
        result++;

	for(int j = i; j < s.size(); j++) {
	  if(s[i] == '0') {
	    s[i] = '1';
	  }else {
	    s[i] = '0';
	  }
	}
      }
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
