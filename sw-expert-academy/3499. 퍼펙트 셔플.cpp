#include <iostream>

using namespace std;

int T, N;

string arr[1000];

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    cin >> N;

    for(int i = 0; i < N; i++) {
      cin >> arr[i];
    }

    cout << '#' << t << ' ';

    if(N % 2 == 0) {
      for(int i = 0; i < N / 2; i++) {
        cout << arr[i] << ' ' << arr[N / 2 + i] << ' ';
      }
    }else {
      for(int i = 0; i <= N / 2; i++) {
        cout << arr[i] << ' ';
	
	if(N / 2 + 1 + i < N) {
	  cout << arr[N / 2 + 1 + i] << ' ';
	}
      }
    }

    cout << '\n';
  }

  return 0;
}
