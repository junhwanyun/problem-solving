#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int result;

int chk[101];

int main() {
  for(int t = 1; t <= 10; t++) {
    result = 0;

    for(int i = 1; i <= 100; i++) {
      chk[i] = 0;
    }

    int length;

    cin >> length;

    int begin;

    cin >> begin;

    vector<int> arr[101];

    int from = 0;
    int to = 0;

    for(int i = 0; i < length / 2; i++) {
      cin >> from >> to;

      arr[from].push_back(to);
    }

    queue<int> q;

    q.push(begin);

    chk[begin] = 1;

    int cur = 0;

    while(!q.empty()) {
      cur = q.front();

      q.pop();

      for(int i = 0; i < arr[cur].size(); i++) {
        if(chk[arr[cur][i]] == 0) {
          q.push(arr[cur][i]);

          chk[arr[cur][i]] = chk[cur] + 1;
        }
      }
    }

    int max = 0;

    for(int i = 100; i >= 0; i--) {
      if(chk[i] > max) {
        max = chk[i];

        result = i;
      }
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
