#include <iostream>

using namespace std;

int T, N, B;
int result;

int H[20];

void solve(int i, int s) {
  if(s >= B && s - B < result) {
    result = s - B;

    return;
  }

  for(int j = i + 1; j < N; j++) {
    solve(j, s + H[j]);
  }
}

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    result = 987654321;

    cin >> N >> B;

    for(int i = 0; i < N; i++) {
      cin >> H[i];
    }

    for(int i = 0; i < N; i++) {
      solve(i, H[i]);
    }
    
    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}