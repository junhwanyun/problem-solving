#include <iostream>

using namespace std;

int T;
string result;

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    result = "";

    string str;
    string s;

    cin >> str;
    cin >> s;

    int hours = 0;
    int minutes = 0;
    int seconds = 0;

    int hour = 0;
    int minute = 0;
    int second = 0;

    hours = stoi(str.substr(0, 2));
    minutes = stoi(str.substr(3, 5));
    seconds = stoi(str.substr(6, 8));

    hour = stoi(s.substr(0, 2));
    minute = stoi(s.substr(3, 5));
    second = stoi(s.substr(6, 8));

    int h = 0;
    int min = 0;
    int sec = 0;

    sec = second - seconds;
    min = minute - minutes;
    h = hour - hours;

    if(sec < 0) {
      sec += 60;

      min--;
    }

    if(min < 0) {
      min += 60;

      h--;
    }

    if(h < 0) {
      h += 24;
    }

    if(h < 10) {
      result += '0';
    }

    result += to_string(h) + ':';

    if(min < 10) {
      result += '0';
    }

    result += to_string(min) + ':';

    if(sec < 10) {
      result += '0';
    }

    result += to_string(sec);

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
