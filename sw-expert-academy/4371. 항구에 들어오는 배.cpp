#include <iostream>

using namespace std;

int T, N;
int result;

int arr[5000];

int main() {
  cin >> T;
    
  for(int t = 1; t <= T; t++) {
    result = 0;

    cin >> N;

    int num = 0;

    for(int i = 0; i < N; i++) {
      cin >> arr[i];
    }

    for(int i = 1; i < N; i++) {
      if(arr[i] > 0) {
        for(int j = i + 1; j < N; j++) {
          if((arr[j] - 1) % (arr[i] - 1) == 0) {
            arr[j] = 0;
          }
        }
      }
    }

    for(int i = 1; i < N; i++) {
      if(arr[i] > 0) {
        result++;
      }
    }
      
    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
