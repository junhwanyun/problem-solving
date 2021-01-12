#include <iostream>

using namespace std;

int T;
string result;

int arr[26];

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    result = "";

    for(int i = 0; i < 26; i++) {
      arr[i] = 0;
    }

    string str;

    cin >> str;

    for(int i = 0; i < str.length(); i++) {
      arr[str[i] - 'a']++;
    }

    for(int i = 0; i < 26; i++) {
      if(arr[i] % 2 == 1) {
        result += 'a' + i;
      }
    }

    if(result == "") {
      result = "Good";
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
