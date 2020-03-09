#include <iostream>

using namespace std;

int result;

int arr[100][100];

int main() {
  for(int t = 1; t <= 10; t++) {
    cin >> t;

    int y = 0;

    for(int i = 0; i < 100; i++) {
      for(int j = 0; j < 100; j++) {
        cin >> arr[i][j];

	if(arr[i][j] == 2) {
	  result = j;
	  y = i;
	}
      }
    }

    while(y) {
      if(result < 99 && arr[y][result + 1]) {
        while(result < 99 && arr[y][result + 1]) {
	  result++;
	}
      }else if(result > 0 && arr[y][result - 1]) {
        while(result > 0 && arr[y][result - 1]) {
	  result--;
	}
      }

      y--;
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
