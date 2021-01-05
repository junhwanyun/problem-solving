#include <iostream>

using namespace std;

int T, N;
int result;

int A[1000], B[1000];

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    result = 0;
    
    cin >> N;

    for(int i = 0; i < N; i++) {
      cin >> A[i] >> B[i];
    }

    for(int i = 0; i < N; i++) {
      for(int j = 0; j < N; j++) {
        if(A[i] < A[j] && B[i] > B[j]) {
          result++;
        }

        if(A[i] > A[j] && B[i] < B[j]) {
          result++;
        }
      }
    }

    result /= 2;

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
