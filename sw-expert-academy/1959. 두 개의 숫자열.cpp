#include <iostream>

using namespace std;

int T, N, M;
int result;

int arr[20];
int a[20];

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    result = 0;

    cin >> N >> M;

    for(int i = 0; i < N; i++) {
      cin >> arr[i];
    }

    for(int i = 0; i < M; i++) {
      cin >> a[i];
    }

    int cal = 0;

    if(N < M) {
      for(int i = 0; i <= M - N; i++) {
        cal = 0;

        for(int j = i; j < i + N; j++) {
          cal += arr[j - i] * a[j];
        }

        if(cal > result) {
          result = cal;
        }
      }
    }else {
      for(int i = 0; i <= N - M; i++) {
        cal = 0;

        for(int j = i; j < i + M; j++) {
          cal += arr[j] * a[j - i];
        }

        if(cal > result) {
          result = cal;
        }
      }
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
