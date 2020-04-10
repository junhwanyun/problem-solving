#include <iostream>

using namespace std;

int T, N;
int result;

char arr[49][49];

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    result = 0;

    cin >> N;

    int bound = 0;
      
    bool flag = false;

    for(int i = 0; i < N; i++) {
      for(int j = 0; j < N; j++) {
        cin >> arr[i][j];

        if(j >= N / 2 - bound && j <= N / 2 + bound) {
          result += arr[i][j] - '0';
        }
      }

      if(bound == N / 2) {
        flag = true;
      }

      if(flag) {
        bound--;
      }else {
        bound++;
      }
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
