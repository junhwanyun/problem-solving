#include <iostream>

using namespace std;

int N;
int result;

string arr[201];

int main() {
  for(int t = 1; t <= 10; t++) {
    result = 1;

    cin >> N;

    int left = 0;
    int right = 0;

    for(int i = 1; i <= N; i++) {
      cin >> i >> arr[i];

      if(i * 2 == N) {
        result = 0;
          
        cin >> left;
      }else if(i * 2 < N) {
        if(arr[i] != "+" && arr[i] != "-" && arr[i] != "*" && arr[i] != "/") {
          result = 0;
        }

        cin >> left >> right;
      }else {
        if(arr[i] == "+" || arr[i] == "-" || arr[i] == "*" || arr[i] == "/") {
          result = 0;
        }
      }
    }
      
    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
