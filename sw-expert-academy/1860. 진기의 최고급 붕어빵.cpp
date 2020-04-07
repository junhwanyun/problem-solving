#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int T, N, M, K;
string result;

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    result = "";

    cin >> N >> M >> K;

    vector<int> v;

    int time = 0;

    for(int i = 0; i < N; i++) {
      cin >> time;

      v.push_back(time);
    }

    sort(v.begin(), v.end());

    int cnt = 0;
    int cur = 0;

    for(int i = 0; i < N; i++) {
      cnt += (v[i] - cur) / M * K - 1;

      if(cnt < 0) {
        result = "Impossible";
          
        break;
      }

      cur += (v[i] - cur) / M * M;
    }

    if(result == "") {
      result = "Possible";
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
