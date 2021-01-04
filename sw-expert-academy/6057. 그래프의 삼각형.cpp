#include <iostream>

using namespace std;

int T, N, M;
int result;

bool arr[51][51];

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    result = 0;

    for(int i = 1; i <= 50; i++) {
      for(int j = 1; j <= 50; j++) {
	arr[i][j] = false;
      }
    }

    cin >> N >> M;

    int x;
    int y;

    for(int i = 0; i < M; i++) {
      cin >> x >> y;

      arr[x][y] = true;
      arr[y][x] = true;
    }

    for(int i = 1; i <= N - 2; i++) {
      for(int j = i + 1; j <= N - 1; j++) {
        for(int k = j + 1; k <= N; k++) {
	  if(arr[i][j] && arr[j][k] && arr[k][i]) {
	    result++;
	  }
	}
      }
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
