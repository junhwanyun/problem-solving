#include <iostream>

using namespace std;

int T, N;

int arr[10][10];

int dir[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    for(int i = 0; i < 10; i++) {
      for(int j = 0; j < 10; j++) {
        arr[i][j] = 0;
      }
    }

    cin >> N;

    int d = 0;
    int x = 0;
    int y = 0;

    int nx = 0;
    int ny = 0;

    for(int i = 1; i <=  N * N; i++) {
      arr[y][x] = i;

      nx = x + dir[d % 4][1];
      ny = y + dir[d % 4][0];

      if(nx >= N || nx < 0 || ny >= N || ny < 0 || arr[ny][nx] != 0) {
        d++;

	x += dir[d % 4][1];
	y += dir[d % 4][0];
      }else {
        x = nx;
	y = ny;
      }
    }
  
    cout << '#' << t << '\n';

    for(int i = 0; i < N; i++) {
      for(int j = 0; j < N; j++) {
        cout << arr[i][j] << ' ';
      }

      cout << '\n';
    }
  }
  
  return 0;
}
