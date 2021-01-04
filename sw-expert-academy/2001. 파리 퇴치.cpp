#include <iostream>

using namespace std;

int T, N, M;
int result;

int arr[15][15];

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    result = 0;

    cin >> N >> M;

    for(int i = 0; i < N; i++) {
      for(int j = 0; j < N; j++) {
        cin >> arr[i][j];
      }
    }

    int cnt = 0;

    for(int i = 0; i <= N - M; i++) {
      for(int j = 0; j <= N - M; j++) {
	cnt = 0;
        
	for(int k = 0; k < M; k++) {
	  for(int l = 0; l < M; l++) {
	    cnt += arr[i + k][j + l];
	  }
	}

	if(cnt > result) {
	  result = cnt;
	}
      }
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
