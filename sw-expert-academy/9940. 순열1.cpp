#include <iostream>

using namespace std;

int TC, N;
string result;

int arr[100001];

int main() {
  cin >> TC;

  for(int t = 1; t <= TC; t++) {
    result = "";

    for(int i = 1; i <= 100000; i++) {
      arr[i] = 0;
    }

    cin >> N;

    int num = 0;

    for(int i = 0; i < N; i++) {
      cin >> num;

      arr[num]++;
    }

    result = "Yes";

    for(int i = 1; i <= N; i++) {
      if(arr[i] == 0) {
        result = "No";

	break;
      }
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
