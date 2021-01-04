#include <iostream>

using namespace std;

int T;
int result, answer;

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    int hour;
    int minute;
    int h;
    int m;

    cin >> hour >> minute >> h >> m;

    result = hour + h;
    answer = minute + m;

    if(answer > 59) {
      result++;

      answer -= 60;
    }

    if(result > 12) {
      result -= 12;
    }

    cout << '#' << t << ' ' << result << ' ' << answer << '\n';
  }

  return 0;
}
