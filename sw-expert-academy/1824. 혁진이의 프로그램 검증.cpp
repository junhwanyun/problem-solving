#include <iostream>

using namespace std;

int T, R, C;
string result;

char arr[20][20];
bool chk[20][20][4][16];

int dir[4][4] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

void solve(int y, int x, int d, int m) {
  if(chk[y][x][d][m]) {
    return;
  }

  if(arr[y][x] == '@') {
    result = "YES";

    return;
  }

  chk[y][x][d][m] = true;

  int nd = d;
  int nm = m;

  if(arr[y][x] == '<' || arr[y][x] == '_' && m != 0) {
    nd = 2;
  }

  if(arr[y][x] == '>' || arr[y][x] == '_' && m == 0) {
    nd = 3;
  }

  if(arr[y][x] == '^' || arr[y][x] == '|' && m != 0) {
    nd = 0;
  }

  if(arr[y][x] == 'v' || arr[y][x] == '|' && m == 0) {
    nd = 1;
  }

  if(arr[y][x] >= '0' && arr[y][x] <= '9') {
    nm = arr[y][x] - '0';
  }

  if(arr[y][x] == '+') {
    nm++;
  }

  if(arr[y][x] == '-') {
    nm--;
  }

  int ny = y + dir[nd][0];
  int nx = x + dir[nd][1];

  if(ny < 0) {
    ny = R - 1;
  }

  if(ny > R - 1) {
    ny = 0;
  }

  if(nx < 0) {
    nx = C - 1;
  }

  if(nx > C - 1) {
    nx = 0;
  }

  if(nm > 15) {
    nm = 0;
  }

  if(nm < 0) {
    nm = 15;
  }

  if(arr[y][x] == '?') {
    for(int i = 0; i < 4; i++) {
      ny = y + dir[i][0];
      nx = x + dir[i][1];

      if(ny < 0) {
        ny = R - 1;
      }

      if(ny > R - 1) {
        ny = 0;
      }

      if(nx < 0) {
        nx = C - 1;
      }

      if(nx > C - 1) {
        nx = 0;
      }

      solve(ny, nx, i, m);
    }

    return;
  }

  solve(ny, nx, nd, nm);
}

int main() {
  cin >> T;

  for(int x = 1; x <= T; x++) {
    result = "NO";

    

    cin >> R >> C;

    char ch = '\u0000';
    
    for(int i = 0; i < R; i++) {
      for(int j = 0; j < C; j++) {
        cin >> ch;

        arr[i][j] = ch;

        for(int k = 0; k < 4; k++) {
          for(int l = 0; l < 16; l++) {
            chk[i][j][k][l] = false;
          }
        }
      }
    }

    solve(0, 0, 3, 0);

    cout << '#' << x << ' ' << result << '\n';
  }

  return 0;
}