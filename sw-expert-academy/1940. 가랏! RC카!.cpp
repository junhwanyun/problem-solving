#include <iostream>

using namespace std;

int T, N;
int result;

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    result = 0;

    cin >> N;

    int v = 0;
    int a = 0;

    int num = 0;
    int n = 0;

    for(int i = 0; i < N; i++) {
      cin >> num;

      if(num != 0) {
	cin >> a;

	if(num == 1) {
	  v += a;
        }else {
	  v -= a;

	  if(v < 0) {
	    v = 0;
	  }
	}
      }

      result += v;
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
