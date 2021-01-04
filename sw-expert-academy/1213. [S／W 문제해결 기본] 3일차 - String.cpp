#include <iostream>
#include <string>

using namespace std;

int result;

string s, str;

int main() {
  for(int t = 1; t <= 10; t++) {
    cin >> t;

    result = 0;

    cin >> s >> str;

    for(int i = 0; i <= str.length() - s.length(); i++) {
      if(s == str.substr(i, s.length())) {
        result++;
      }
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
