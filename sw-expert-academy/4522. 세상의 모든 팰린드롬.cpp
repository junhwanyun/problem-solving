#include <iostream>

using namespace std;

int T;
string result;

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    result = "";

    string str;

    cin >> str;

    for(int i = 0; i < str.length() / 2; i++) {
      if(str[i] != '?' && str[str.length() - 1 - i] != '?' && str[i] != str[str.length() - 1 - i]) {
        result = "Not exist";

	break;
      }
    }

    if(result == "") {
      result = "Exist";
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
