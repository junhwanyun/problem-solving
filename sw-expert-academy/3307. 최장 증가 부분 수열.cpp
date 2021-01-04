#include <iostream>

using namespace std;

int T, N;
int result;

int arr[1000];
int a[1000];

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    result = 0;

    cin >> N;

    for(int i = 0; i < N; i++) {
      cin >> arr[i];

      a[i] = 1;
    }

    for(int i = 0; i < N - 1; i++) {
      for(int j = i + 1; j < N; j++) {
        if(arr[j] > arr[i]) {
	  if(a[j] < a[i] + 1) {
	    a[j] = a[i] + 1;

	    if(a[j] > result) {
	      result = a[j];
	    }
	  }
	}
      }
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
