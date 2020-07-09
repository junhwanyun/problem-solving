#include <iostream>
#include <utility>

using namespace std;

int T, N;
long long result;

pair<int, int> arr[20];

long long X;
long long Y;

bool chk[20];

void solve(int c, int n) {
  if(n == N / 2) {
    X = 0;
    Y = 0;

    for(int i = 0; i < N; i++) {
      if(chk[i]) {
        X -= arr[i].first;
	Y -= arr[i].second;
      }else {
        X += arr[i].first;
	Y += arr[i].second;
      }
    }

    if(X * X + Y * Y < result) {
      result = X * X + Y * Y;
    }

    return;
  }

  for(int i = c; i < N; i++) {
    if(!chk[i]) {
      chk[i] = true;

      solve(i + 1, n + 1);

      chk[i] = false;
    }
  }
}

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    result = 80000000000;

    for(int i = 0; i < 20; i++) {
      chk[i] = false;
    }

    cin >> N;

    int x;
    int y;

    for(int i = 0; i < N; i++) {
      cin >> x >> y;
      
      arr[i] = make_pair(x, y);
    }

    solve(0, 0);

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
