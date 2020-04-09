#include <iostream>

using namespace std;

int T, N;
int result;

int arr[10][10];

void solve(int y, int x) {
  if(y == N - 1) {
    result++;

    return;
  }

  for(int i = 0; i < N; i++) {
    arr[y][i]++;
    arr[i][x]++;

    if(i > 0) {
      if(y - i >= 0 && x - i >= 0) {
        arr[y - i][x - i]++;
      }

      if(y - i >= 0 && x + i < N) {
        arr[y - i][x + i]++;
      }

      if(y + i < N && x - i >= 0) {
        arr[y + i][x - i]++;
      }

      if(y + i < N && x + i < N) {
        arr[y + i][x + i]++;
      }
    }
  }

  for(int i = 0; i < N; i++) {
    if(arr[y + 1][i] == 0) {
      solve(y + 1, i);
    }
  }

  for(int i = 0; i < N; i++) {
    arr[y][i]--;
    arr[i][x]--;

    if(i > 0) {
      if(y - i >= 0 && x - i >= 0) {
        arr[y - i][x - i]--;
      }

      if(y - i >= 0 && x + i < N) {
        arr[y - i][x + i]--;
      }

      if(y + i < N && x - i >= 0) {
        arr[y + i][x - i]--;
      }

      if(y + i < N && x + i < N) {
        arr[y + i][x + i]--;
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
      solve(0, i);
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
