#include <iostream>
#include <set>

using namespace std;

int T, N, A, X, Y;
long result;

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    result = 0;

    cin >> N >> A;

    multiset<int> m;

    m.insert(A);

    int mid = A;

    auto it = m.begin();

    for(int i = 0; i < N; i++) {
      cin >> X >> Y;

      m.insert(X);
      m.insert(Y);

      mid = *it;

      if(X < mid && Y < mid) {
        it--;
      }else if(X > mid && Y > mid) {
        it++;
      }

      result += *it;
      result %= 20171109;
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}