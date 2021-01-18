#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

int T, N;
long V;
long result;

pair<int, int> arr[20];
bool chk[20];

void solve(int i, int c) {
  int x = 0;
  int y = 0;

  if(c == N / 2) {
    for(int j = 0; j < N; j++) {
      if(chk[j]) {
        x += arr[j].first;
        y += arr[j].second;
      }else {
        x -= arr[j].first;
        y -= arr[j].second;
      }
    }

    V = x * (long) x + y * (long) y;

    if(V < result) {
      result = V;
    }

    return;
  }
  
  for(int j = i + 1; j < N; j++) {
    if(!chk[j]) {
      chk[j] = true;

      solve(j, c + 1);

      chk[j] = false;
    }
  }
}

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    result = 98765432101;

    for(int i = 0; i < 20; i++) {
      chk[i] = false;
    }

    cin >> N;

    vector<pair<int, int>> v;
    pair<int, int> p;

    int x, y;

    for(int i = 0; i < N; i++) {
      cin >> x >> y;

      p = make_pair(x, y);

      arr[i] = p;
    }

    solve(0, 0);

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}