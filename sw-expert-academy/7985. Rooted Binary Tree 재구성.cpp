#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int T, K;
vector<int> v[10];

int arr[1024];

void solve(int c, int d, int k) {
  v[k].push_back(arr[c]);

  if(d == 0) {
    return;
  }

  solve(c - d, d / 2, k + 1);
  solve(c + d, d / 2, k + 1);
}

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    for(int i = 0; i < 10; i++) {
      v[i].clear();
    }

    cin >> K;

    int len = pow(2, K);

    for(int i = 1; i < len; i++) {
      cin >> arr[i];
    }

    solve(len / 2, len / 2 / 2, 0);

    cout << '#' << t << ' ';

    for(int i = 0; i < K; i++) {
      for(int j = 0; j < v[i].size(); j++) {
        cout << v[i][j] << ' ';
      }

      cout << '\n';
    }
  }

  return 0;
}
