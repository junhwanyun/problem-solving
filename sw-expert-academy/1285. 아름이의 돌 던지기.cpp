#include <iostream>

using namespace std;

int T, N;
int result, answer;

int arr[100001];

int main() {
  cin >> T;
	
  for(int t = 1; t <= T; t++) {
    result = 987654321;

    for(int i = 0; i <= 100000; i++) {
      arr[i] = 0;
    }

    cin >> N;

    int location = 0;

    for(int i = 0; i < N; i++) {
      cin >> location;

      if(location < 0) {
        location = -location;
      }

      if(location < result) {
        result = location;
      }

      arr[location]++;
    }

    answer = arr[result];

    cout << '#' << t << ' ' << result << ' ' << answer << '\n';
  }

  return 0;
}
