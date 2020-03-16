#include <iostream>
#include <utility>
#include <queue>

using namespace std;

int result;

char arr[16][16];
bool chk[16][16];

int dir[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

int main() {
  for(int t = 1; t <= 10; t++) {
    result = 0;

    cin >> t;

    for(int i = 0; i < 16; i++) {
      for(int j = 0; j < 16; j++) {
        cin >> arr[i][j];

        chk[i][j] = false;
      }
    }

    queue<pair<int, int>> q;

    pair<int, int> p;

    p = make_pair(1, 1);

    q.push(p);

    int x = 0;
    int y = 0;
    
    while(!q.empty()) {
      p = q.front();

      q.pop();

      x = p.second;
      y = p.first;

      int nx = 0;
      int ny = 0;

      for(int d = 0; d < 4; d++) {
        nx = x + dir[d][1];
        ny = y + dir[d][0];

        if(arr[ny][nx] == '3') {
          result = 1;

          break;
        }

        if(arr[ny][nx] == '0' && !chk[ny][nx]) {
          p = make_pair(ny, nx);

          q.push(p);

          chk[ny][nx] = true;
        }
      }

      if(result == 1) {
        break;
      }
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
