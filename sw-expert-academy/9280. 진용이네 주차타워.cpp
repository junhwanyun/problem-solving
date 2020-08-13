#include <iostream>
#include <queue>

using namespace std;

int TC;
int result;

int R[100];
int W[2000];
bool arr[100];
int a[2000];

int main() {
  cin >> TC;

  for(int t = 1; t <= TC; t++) {
    result = 0;

    for(int i = 0; i < 100; i++) {
      arr[i] = false;
    }

    for(int i = 0; i < 2000; i++) {
      a[i] = 0;
    }

    int n;
    int m;

    cin >> n >> m;

    for(int i = 0; i < n; i++) {
      cin >> R[i];
    }

    for(int i = 0; i < m; i++) {
      cin >> W[i];
    }

    int x;

    queue<int> q;

    for(int i = 0; i < 2 * m; i++) {
      cin >> x;

      if(x > 0) {
        for(int j = 0; j < n; j++) {
          if(!arr[j]) {
            result += W[x - 1] * R[j];

            arr[j] = true;
            a[x - 1] = j;

            break;
          }else if(j == n - 1) {
            q.push(x - 1);
          }
        }
      }else {
        arr[a[-x - 1]] = false;
        
        if(!q.empty()) {
          result += W[q.front()] * R[a[-x - 1]];

          arr[a[-x - 1]] = true;
          a[q.front()] = a[-x - 1];

          q.pop();
        }
      }
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
