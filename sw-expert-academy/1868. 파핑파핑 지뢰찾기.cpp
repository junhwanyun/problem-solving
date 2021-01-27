#include <iostream>
#include <queue>

using namespace std;

int T, N;
int result;

char arr[300][300];
bool chk[300][300];

int dir[9][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}, {-1, -1}, {-1, 1}, {1, 1}, {1, -1}, {0, 0}};

bool sol(int y, int x) {
  for(int i = 0; i < 9; i++) {
    int ny = y + dir[i][0];
    int nx = x + dir[i][1]; 

    if(ny < 0 || ny >= N || nx < 0 || nx >= N) {
      continue;
    }

    if(arr[ny][nx] == '*') {
      return false;
    }
  }

  return true;
}

void solve(int y, int x) {
  chk[y][x] = true;

  queue<pair<int, int>> q;

  q.push({y, x});

  while(!q.empty()) {
    int cy = q.front().first;
    int cx = q.front().second;

    q.pop();

    for(int i = 0; i < 8; i++) {
      int ny = cy + dir[i][0];
      int nx = cx + dir[i][1];

      if(ny < 0 || ny >= N || nx < 0 || nx >= N) {
        continue;
      }

      if(arr[ny][nx] == '.' && !chk[ny][nx]) {
        chk[ny][nx] = true;

	if(sol(ny, nx)) {
	  q.push({ny, nx});
	}
      }
    }
  }
}

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    result = 0;

    cin >> N;

    for(int i = 0; i < N; i++) {
      for(int j = 0; j < N; j++) {
        cin >> arr[i][j];

	chk[i][j] = false;
      }
    }

    for(int i = 0; i < N; i++) {
      for(int j = 0; j < N; j++) {
        if(arr[i][j] == '.' && !chk[i][j] && sol(i, j)) {
	  result++;

	  solve(i, j);
	}
      }
    }

    for(int i = 0; i < N; i++) {
      for(int j = 0; j < N; j++) {
	if(arr[i][j] == '.' && !chk[i][j]) {
	  result++;
	}
      }
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
