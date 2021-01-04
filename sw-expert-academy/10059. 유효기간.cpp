#include <iostream>

using namespace std;

int T;
string result;

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    string str;

    cin >> str;

    string s1;
    string s2;

    int front = stoi(str.substr(0, 2));
    int back = stoi(str.substr(2, 4));

    if(front >= 1 && front <= 12) {
      if(back >= 1 && back <= 12) {
        result = "AMBIGUOUS";
      }else {
        result = "MMYY";
      }
    }else {
      if(back >= 1 && back <= 12) {
        result = "YYMM";
      }else {
        result = "NA";
      }
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
