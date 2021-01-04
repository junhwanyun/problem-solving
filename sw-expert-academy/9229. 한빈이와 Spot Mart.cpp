#include <iostream>

using namespace std;

int T, N, M;
int result;

int arr[1000];

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    result = 0;

    cin >> N >> M;

    for(int i = 0; i < N; i++) {
      cin >> arr[i];
    }

    for(int i = 0; i < N - 1; i++) {
      for(int j = i + 1; j < N; j++) {
        if(arr[i] + arr[j] > result && arr[i] + arr[j] <= M) {
	  result = arr[i] + arr[j];
	}
      }
    }

    if(result == 0) {
      result = -1;
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
