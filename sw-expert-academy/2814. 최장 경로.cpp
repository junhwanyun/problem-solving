#include <iostream>

using namespace std;

int T, N, M;
int result;

int arr[11][11];
bool chk[11];

void solve(int n, int c) {
  chk[n] = true;

  bool flag = false;

  for(int i = 1; i <= N; i++) {
    if(arr[n][i] != 0 && !chk[i]) {
      flag = true;

      arr[n][i]--;
      arr[i][n]--;

      solve(i, c + 1);

      arr[n][i]++;
      arr[i][n]++;
    }
  }

  if(!flag) {
    if(c > result) {
      result = c;
    }
  }
    
  chk[n] = false;
}

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    result = 0;

    for(int i = 1; i <= N; i++) {
      chk[i] = false;

      for(int j = 1; j <= N; j++) {
        arr[i][j] = 0;
      }
    }

    cin >> N >> M;

    int x;
    int y;

    for(int i = 0; i < M; i++) {
      cin >> x >> y;

      arr[x][y]++;
      arr[y][x]++;
    }

    for(int i = 1; i <= N; i++) {
      solve(i, 1);
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
