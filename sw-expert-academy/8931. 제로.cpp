#include <iostream>
#include <vector>

using namespace std;

int T, K;
int result;

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    result = 0;

    cin >> K;

    int num = 0;

    vector<int> v;

    for(int i = 0; i < K; i++) {
      cin >> num;

      if(num == 0) {
        v.pop_back();
      }else {
        v.push_back(num);
      }
    }

    for(int i = 0; i < v.size(); i++) {
      result += v[i];
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
