#include <iostream>

using namespace std;

int T, H, W, N;
char result[20][20];

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    cin >> H >> W;

    int x = 0;
    int y = 0;

    for(int i = 0; i < H; i++) {
      for(int j = 0; j < W; j++) {
        cin >> result[i][j];

        if(result[i][j] == '^' || result[i][j] == 'v' || result[i][j] == '<' || result[i][j] == '>') {
          x = j;
          y = i;
        }
      }
    }

    cin >> N;

    string str;

    cin >> str;

    for(int i = 0; i < N; i++) {
      switch(str[i]) {
        case 'U':
          if(y - 1 >= 0 && result[y - 1][x] == '.') {
            result[y - 1][x] = '^';
            result[y][x] = '.';

            y--;
          }else {
            result[y][x] = '^';
          }

          break;
        case 'D':
          if(y + 1 < H && result[y + 1][x] == '.') {
            result[y + 1][x] = 'v';
            result[y][x] = '.';

            y++;
          }else {
            result[y][x] = 'v';
          }

          break;
        case 'L':
          if(x - 1 >= 0 && result[y][x - 1] == '.') {
            result[y][x - 1] = '<';
            result[y][x] = '.';

            x--;
          }else {
            result[y][x] = '<';
          }

          break;
        case 'R':
          if(x + 1 < W && result[y][x + 1] == '.') {
            result[y][x + 1] = '>';
            result[y][x] = '.';

            x++;
          }else {
            result[y][x] = '>';
          }

          break;
        case 'S':
          switch(result[y][x]) {
            case '^':
              for(int j = y; j >= 0; j--) {
                if(result[j][x] == '*') {
                  result[j][x] = '.';

                  break;
                }

                if(result[j][x] == '#') {
                  break;
                }
              }

              break;
            case 'v':
              for(int j = y; j < H; j++) {
                if(result[j][x] == '*') {
                  result[j][x] = '.';

                  break;
                }

                if(result[j][x] == '#') {
                  break;
                }
              }

              break;
            case '<':
              for(int j = x; j >= 0; j--) {
                if(result[y][j] == '*') {
                  result[y][j] = '.';

                  break;
                }

                if(result[y][j] == '#') {
                  break;
                }
              }

              break;
            case '>':
              for(int j = x; j < W; j++) {
                if(result[y][j] == '*') {
                  result[y][j] = '.';

                  break;
                }

                if(result[y][j] == '#') {
                  break;
                }
              }

              break;
          }

          break;
      }
    }

    cout << '#' << t << ' ';
      
    for(int i = 0; i < H; i++) {
      for(int j = 0; j < W; j++) {
        cout << result[i][j];
      }

      cout << '\n';
    }
  }

  return 0;
}
