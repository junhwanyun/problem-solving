#include <iostream>

using namespace std;

int T, N, K;
int result;

int arr[15][15];

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    result = 0;

    cin >> N >> K;

    for(int i = 0; i < N; i++) {
      for(int j = 0; j < N; j++) {
        cin >> arr[i][j];
      }
    }

    bool row = false;
    bool col = false;

    for(int i = 0; i < N; i++) {
      for(int j = 0; j <= N - K; j++) {
	row = true;
	col = true;

	if(j != 0) {
	  if(arr[i][j - 1] == 1) {
	    row = false;
	  }
	  
	  if(arr[j - 1][i] == 1) {
	    col = false;
	  }
	}

	for(int k = 0; k < K; k++) {
	  if(arr[i][j + k] == 0) {
	    row = false;
	  }

	  if(arr[j + k][i] == 0) {
	    col = false;
	  }
	}

	if(j + K < N) {
          if(arr[i][j + K] == 1) {
	    row = false;
	  }

	  if(arr[j + K][i] == 1) {
	    col = false;
	  }
        }

	if(row) {
	  result++;
	}

	if(col) {
	  result++;
	}
      }
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
