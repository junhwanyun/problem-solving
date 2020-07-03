#include <iostream>

using namespace std;

int T, N, M;
int result, res;

int a[20][20];
int arr[20];

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    result = 0;
    res = 0;

    cin >> N >> M;

    int cnt = 0;

    for(int i = 0; i < N; i++) {
      cnt = 0;

      for(int j = 0; j < M; j++) {
        cin >> a[i][j];

        if(a[i][j] > 0) {
          cnt++;
        }
      }

      arr[i] = cnt;

      if(cnt > res) {
        res = cnt;
      }
    }

    for(int i = 0; i < N; i++) {
      if(arr[i] == res) {
        result++;
      }
    }


    cout << '#' << t << ' ' << result << ' ' << res << '\n';
  }

  return 0;
}
