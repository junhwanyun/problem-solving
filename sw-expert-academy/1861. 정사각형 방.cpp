#include <iostream>

using namespace std;

int T, N, A;
int result, res;

int arr[1000][1000];

int dir[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

int max;

void solve(int y, int x, int b, int s, int c) {
  bool flag = false;
  
  for(int i = 0; i < 4; i++) {
    int ny = y + dir[i][0];
    int nx = x + dir[i][1];

    if(ny < 0 || ny > N - 1 || nx < 0 || nx > N - 1) {
      continue;
    }

    if(arr[ny][nx] == arr[y][x] + 1) {
      flag = true;

      solve(ny, nx, b, s, c + 1);
    }
  }

  if(!flag) {
    if(c == res && arr[b][s] < result) {
      result = arr[b][s];
    }

    if(c > res) {
      result = arr[b][s];

      res = c;
    }

    return;
  }
}

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    result = 1000000;
    res = 0;

    cin >> N;

    for(int i = 0; i < N; i++) {
      for(int j = 0; j < N; j++) {
        cin >> arr[i][j];
      }
    }

    for(int i = 0; i < N; i++) {
      for(int j = 0; j < N; j++) {
        solve(i, j, i, j, 1);
      }
    }

    cout << '#' << t << ' ' << result << ' ' << res << '\n';
  }

  return 0;
}