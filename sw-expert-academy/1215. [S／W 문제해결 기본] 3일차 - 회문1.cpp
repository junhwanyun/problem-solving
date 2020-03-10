#include <iostream>
#include <string>

using namespace std;

int result;

string arr[8];

int main() {
  for(int t = 1; t <= 10; t++) {
    result = 0;

    int length;

    cin >> length;
    
    for(int i = 0; i < 8; i++) {
      cin >> arr[i];
    }

    for(int i = 0; i < 8; i++) {
      bool flagR = false;
      bool flagC = false;

      for(int j = 0; j <= 8 - length; j++) {
	flagR = true;
	flagC = true;

        for(int k = 0; k < length / 2; k++) {
	  if(arr[i][j + k] != arr[i][j + length - 1 - k]) {
	    flagR = false;
	  }

	  if(arr[j + k][i] != arr[j + length - 1 - k][i]) {
	    flagC = false;
	  }
	}

	if(flagR) {
	  result++;
	}

	if(flagC) {
	  result++;
	}
      }
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
