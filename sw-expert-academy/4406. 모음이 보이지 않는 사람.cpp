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

    for(int i = 0; i < str.length(); i++) {
      if(str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u') {
        result += str[i];
      }
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
