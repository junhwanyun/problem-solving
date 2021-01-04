#include <iostream>

using namespace std;

int result;

int arr[100][100];

int main() {
  for(int t = 1; t <= 10; t++) {
    cin >> t;

    for(int i = 0; i < 100; i++) {
      for(int j = 0; j < 100; j++) {
        cin >> arr[i][j];
      }
    }

    int x = 0;
    int y = 0;

    int min = 987654321;

    int length = 0;
    
    for(int i = 99; i >= 0; i--) {
      y = 0;

      if(arr[y][i]) {
	x = i;

	length = 0;

        while(y < 99) {
	  if(x < 99 && arr[y][x + 1]) {
	    while(x < 99 && arr[y][x + 1]) {
	      x++;
	      
	      length++;
	    }
	  }else if(x > 0 && arr[y][x - 1]) {
	    while(x > 0 && arr[y][x - 1]) {
	      x--;

	      length++;
	    }
	  }

	  y++;

	  length++;
	}

	if(length < min) {
	  min = length;

	  result = i;
	}
      }
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
