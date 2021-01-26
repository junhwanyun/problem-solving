#include <iostream>

using namespace std;

int T, N, P;
double result;

double arr[16][16];
bool chk[16];

void solve(int r, double p) {
  if(p <= result) {
    return;
  }

  if(r == N - 1) {
    if(p > result) {
      result = p;
    }

    return;
  }

  for(int i = 0; i < N; i++) {
    if(!chk[i]) {
      chk[i] = true;

      solve(r + 1, p * arr[r + 1][i]);
      
      chk[i] = false;
    }
  }
}

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    result = 0.0;

    cin >> N;

    for(int i = 0; i < N; i++) {
      chk[i] = false;

      for(int j = 0; j < N; j++) {
        cin >> P;
        
        arr[i][j] = P / 100.0;
      }
    }

    for(int i = 0; i < N; i++) {
      chk[i] = true;

      solve(0, arr[0][i]);

      chk[i] = false;
    }

    result *= 100;

    printf("#%d %f\n", t, result);
  }

  return 0;
}