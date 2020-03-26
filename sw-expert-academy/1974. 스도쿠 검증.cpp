#include <iostream>

using namespace std;

int T;
int result;

int arr[9][9];

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    result = 0;

    for(int i = 0; i < 9; i++) {
      for(int j = 0; j < 9; j++) {
        cin >> arr[i][j];
      }
    }

    int row[9] = {0, };
    int col[9] = {0, };
    int square[9] = {0, };

    result = 1;

    for(int i = 0; i < 9; i++) {
      for(int j = 0; j < 9; j++) {
        row[arr[i][j] - 1]++;
	col[arr[j][i] - 1]++;
      }

      for(int j = 0; j < 9; j++) {
        if(row[j] != i + 1 || col[j] != i + 1) {
	  result = 0;

	  break;
	}
      }

      if(result == 0) {
        break;
      }
    }

    int cnt = 0;

    for(int i = 0; i < 9; i += 3) {
      for(int j = 0; j < 9; j += 3) {
	for(int k = 0; k < 3; k++) {
	  for(int l = 0; l < 3; l++) {
	    square[arr[i + k][j + l] - 1]++;
	  }
	}

	cnt++;

	for(int k = 0; k < 9; k++) {
	  if(square[k] != cnt) {
	    result = 0;

	    break;
	  }
	}
      }
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
