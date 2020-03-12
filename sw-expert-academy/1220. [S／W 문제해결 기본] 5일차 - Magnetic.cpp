#include <iostream>

using namespace std;

int result;

int arr[100][100];

int main() {
  for(int t = 1; t <= 10; t++) {
    result = 0;

    int length;

    cin >> length;

    for(int i = 0; i < length; i++) {
      for(int j = 0; j < length; j++) {
        cin >> arr[i][j];
      }
    }

    for(int i = 0; i < length; i++) {
      for(int j = 0; j < length; j++) {
        if(arr[j][i] == 1) {
	  if(j == length - 1) {
	    arr[j][i] = 0;
	  }else if(arr[j + 1][i] == 0) {
	    arr[j][i] = 0;

	    arr[j + 1][i] = 1;
	  }
	}else if(arr[j][i] == 2) {
	  if(j == 0) {
	    arr[j][i] = 0;
	  }else if(arr[j - 1][i] == 0) {
	    arr[j][i] = 0;

	    arr[j - 1][i] = 2;
	  }
	}
      }
    }

    bool flag = false;

    for(int i = 0; i < length; i++) {
      flag = false;

      for(int j = 0; j < length; j++) {
	if(arr[j][i] == 1) {
	  flag = true;
	}

	if(flag && arr[j][i] == 2) {
	  result++;

	  flag = false;
	}
      }
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
