#include <iostream>
#include <set>

using namespace std;

int T;
int result;

int arr[4][4];

int dir[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

set<int> s;

void solve(int y, int x, int c, int n) {
  if(c == 7) {
    s.insert(n);

    return;
  }

  int nn = n * 10;

  for(int i = 0; i < 4; i++) {
    int ny = y + dir[i][0];
    int nx = x + dir[i][1];

    if(ny < 0 || ny >= 4 || nx < 0 || nx >= 4) {
      continue;
    }

    solve(ny, nx, c + 1, nn + arr[ny][nx]);
  }
}

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    result = 0;

    s.clear();

    for(int i = 0; i < 4; i++) {
      for(int j = 0; j < 4; j++) {
        cin >> arr[i][j];
      }
    }

    for(int i = 0; i < 4; i++) {
      for(int j = 0; j < 4; j++) {
	    solve(i, j, 1, arr[i][j]);
      }
    }

    result = s.size();

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}