#include <iostream>
#include <string>

using namespace std;

int T;
string str;
string result;

int day[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    cin >> str;

    result = "";
    
    int month = stoi(str.substr(4, 2));
    int date = stoi(str.substr(6, 2));

    if(month < 1 || month > 12) {
      result = "-1";
    }else if(date < 1 || date > day[month]) {
      result = "-1";
    }else {
      result += str.substr(0, 4) + '/'; 

      if(month < 10) {
	result += '0';
      }

      result += to_string(month) + '/';

      if(date < 10) {
	result += '0';
      }

      result += to_string(date);
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
