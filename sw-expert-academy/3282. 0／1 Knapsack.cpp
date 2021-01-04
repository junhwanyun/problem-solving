#include <iostream>

using namespace std;

int T, N, K;
int result;

int V[101];
int C[101];

int arr[1001][101];

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    for(int i = 1; i <= K; i++) {
      for(int j = 1; j <= N; j++) {
        arr[i][j] = 0;
      }
    }

    cin >> N >> K;

    for(int i = 1; i <= N; i++) {
      cin >> V[i] >> C[i];
    }


    for(int i = 1; i <= K; i++) {
      for(int j = 1; j <= N; j++) {
        if(i < V[j]) {
          arr[i][j] = arr[i][j - 1];
        }else {
          arr[i][j] = max(arr[i][j - 1], arr[i - V[j]][j- 1] + C[j]);
        }
      }
    }

    result = arr[K][N];

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
