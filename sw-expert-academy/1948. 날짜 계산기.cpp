#include <iostream>

using namespace std;

int T;
int result;

int arr[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    result = 0;

    int month;
    int date;
    int m;
    int d;

    cin >> month >> date >> m >> d;

    for(int i = month; i < m; i++) {
      result += arr[i];
    }

    result += d - date + 1;
  
    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
