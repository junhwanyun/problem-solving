#include <iostream>

using namespace std;

int T, N, M;
int result, res;

int arr[9][9];

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    result = 0;
    res = 0;

    for(int i = 1; i <= 8; i++) {
      for(int j = 1; j <= 8; j++) {
        arr[i][j] = 0;
      }
    }

    cin >> N >> M;

    arr[N / 2][N / 2 + 1] = 1;
    arr[N / 2 + 1][N / 2] = 1;
    arr[N / 2][N / 2] = 2;
    arr[N / 2 + 1][N / 2 + 1] = 2;

    int x = 0;
    int y = 0;
    int c = 0;

    for(int i = 0; i < M; i++) {
      cin >> x >> y >> c;

      arr[y][x] = c;

      for(int i = 1; i < N; i++) {
        if(y - i <= 0 || arr[y - i][x] == 0) {
          break;
        }

        if(arr[y - i][x] == c) {
          for(int j = 1; j < i; j++) {
            arr[y - j][x] = c;
          }

          break;
        }
      }

      for(int i = 1; i < N; i++) {
        if(y - i <= 0 || x + i > N || arr[y - i][x + i] == 0) {
          break;
        }

        if(arr[y - i][x + i] == c) {
          for(int j = 1; j < i; j++) {
            arr[y - j][x + j] = c;
          }

          break;
        }
      }

      for(int i = 1; i < N; i++) {
        if(y + i > N || arr[y + i][x] == 0) {
          break;
        }

        if(arr[y + i][x] == c) {
          for(int j = 1; j < i; j++) {
            arr[y + j][x] = c;
          }

          break;
        }
      }

      for(int i = 1; i < N; i++) {
        if(y + i > N || x - i <= 0 || arr[y + i][x - i] == 0) {
          break;
        }

        if(arr[y + i][x - i] == c) {
          for(int j = 1; j < i; j++) {
            arr[y + j][x - j] = c;
          }

          break;
        }
      }

      for(int i = 1; i < N; i++) {
        if(x - i <= 0 || arr[y][x - i] == 0) {
          break;
        }

        if(arr[y][x - i] == c) {
          for(int j = 1; j < i; j++) {
            arr[y][x - j] = c;
          }

          break;
        }
      }

      for(int i = 1; i < N; i++) {
        if(y - i <= 0 || x - i <= 0 || arr[y - i][x - i] == 0) {
          break;
        }

        if(arr[y - i][x - i] == c) {
          for(int j = 1; j < i; j++) {
            arr[y - j][x - j] = c;
          }

          break;
        }
      }

      for(int i = 1; i < N; i++) {
        if(x + i > N || arr[y][x + i] == 0) {
          break;
        }

        if(arr[y][x + i] == c) {
          for(int j = 1; j < i; j++) {
            arr[y][x + j] = c;
          }

          break;
        }
      }

      for(int i = 1; i < N; i++) {
        if(y + i > N || x + i > N || arr[y + i][x + i] == 0) {
          break;
        }

        if(arr[y + i][x + i] == c) {
          for(int j = 1; j < i; j++) {
            arr[y + j][x + j] = c;
          }

          break;
        }
      }
    }

    for(int i = 1; i <= N; i++) {
      for(int j = 1; j <= N; j++) {
        if(arr[i][j] == 1) {
          result++;
        }

        if(arr[i][j] == 2) {
          res++;
        }
      }
    }

    cout << '#' << t << ' ' << result << ' ' << res << '\n';
  }

  return 0;
}
