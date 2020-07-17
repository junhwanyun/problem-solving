#include <iostream>

using namespace std;

int T, X;
int result;

int arr[10];

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    result = 0;

    for(int i = 0; i < 10; i++) {
      arr[i] = 0;
    }
    
    cin >> X;

    while(X) {
      arr[X % 10]++;

      X /= 10;
    }

    for(int i = 0; i < 10; i++) {
      if(arr[i] > 0) {
        result++;
      }
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
