#include <iostream>
#include <string>

using namespace std;

int result;

int main() {
  for(int t = 1; t <= 10; t++) {
    result = 0;

    int length;
    
    cin >> length;

    string str;

    cin >> str;

    for(int i = 0; i < length; i += 2) {
      result += str[i] - '0';
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
