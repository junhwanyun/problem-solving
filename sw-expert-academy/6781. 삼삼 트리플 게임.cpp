#include <iostream>

using namespace std;

int T;
string result;

int R[10];
int G[10];
int B[10];
int r[10];
int g[10];
int b[10];

int main() {
  cin >> T;

  for (int t = 1; t <= T; t++) {
    for(int i = 1; i < 10; i++) {
      R[i] = 0;
      G[i] = 0;
      B[i] = 0;
      r[i] = 0;
      g[i] = 0;
      b[i] = 0;
    }

    string str;

    cin >> str;

    char color = '\u0000';
    int num = 0;

    for (int i = 0; i < 9; i++) {
      cin >> color;

      num = str[i] - '0';

      if (color == 'R') {
        R[num]++;
        r[num]++;
      }else if (color == 'G') {
        G[num]++;
        g[num]++;
      }else {
        B[num]++;
        b[num]++;
      }
    }

    int cnt = 0;

    for (int i = 1; i <= 9; i++) {
      if (R[i] >= 3) {
        cnt++;

        R[i] -= 3;
      }
      
      if (G[i] >= 3) {
        cnt++;

        G[i] -= 3;
      }
      
      if (B[i] >= 3) {
        cnt++;

        B[i] -= 3;
      }

      if (cnt == 3) {
        break;
      }
    }

    for (int i = 1; i <= 7; i++) {
      for (int j = 1; j <= 2; j++) {
        if (R[i] && R[i + 1] && R[i + 2]) {
          cnt++;

          R[i]--;
          R[i + 1]--;
          R[i + 2]--;

          if (cnt == 3) {
            break;
          }
        }
          
        if (G[i] && G[i + 1] && G[i + 2]) {
          cnt++;

          G[i]--;
          G[i + 1]--;
          G[i + 2]--;

          if (cnt == 3) {
            break;
          }
        }
        
        if (B[i] && B[i + 1] && B[i + 2]) {
          cnt++;

          B[i]--;
          B[i + 1]--;
          B[i + 2]--;

          if (cnt == 3) {
            break;
          }
        }
      }
      
      if (cnt == 3) {
        break;
      }
    }

    if (cnt == 3) {
      result = "Win";
    }else {
      cnt = 0;

      for (int i = 1; i <= 7; i++) {
        for (int j = 1; j <= 3; j++) {
          if (r[i] && r[i + 1] && r[i + 2]) {
            cnt++;

            r[i]--;
            r[i + 1]--;
            r[i + 2]--;
          }
          
          if (g[i] && g[i + 1] && g[i + 2]) {
            cnt++;

            g[i]--;
            g[i + 1]--;
            g[i + 2]--;
          }
        
          if (b[i] && b[i + 1] && b[i + 2]) {
            cnt++;

            b[i]--;
            b[i + 1]--;
            b[i + 2]--;
          }

	  if(cnt == 3) {
	    break;
	  }
        }
      
        if (cnt == 3) {
          break;
        }
      }

      for (int i = 1; i <= 9; i++) {
        if (r[i] >= 3) {
          cnt++;

          r[i] -= 3;
        }
      
        if (g[i] >= 3) {
          cnt++;

          g[i] -= 3;
        }
      
        if (b[i] >= 3) {
          cnt++;

          b[i] -= 3;
        }

        if (cnt == 3) {
          break;
        }
      }

      if (cnt == 3) {
        result = "Win";
      }else {
        result = "Continue";
      }
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
