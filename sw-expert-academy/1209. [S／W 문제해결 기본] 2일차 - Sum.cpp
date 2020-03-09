#include <iostream>

using namespace std;

int result;

int arr[100][100];

int main() {
  for(int t = 1; t <= 10; t++) {
    cin >> t;

    result = 0;

    for(int i = 0; i < 100; i++) {
      for(int j = 0; j < 100; j++) {
        cin >> arr[i][j];
      }
    }

    int row = 0;
    int col = 0;
    int down = 0;
    int up = 0;

    for(int i = 0; i < 100; i++) {
      down += arr[i][i];
      up += arr[99 - i][i];

      row = 0;
      col = 0;

      for(int j = 0; j < 100; j++) {
        row += arr[i][j];
	col += arr[j][i];
      }

      result = max(result, row);
      result = max(result, col);
    }

    result = max(result, down);
    result = max(result, up);

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
