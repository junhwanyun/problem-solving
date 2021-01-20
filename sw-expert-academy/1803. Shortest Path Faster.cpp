#include <cstdio>
#include <vector>
#include <utility>
#include <queue>

using namespace std;

int T, N, M;
long result;

long arr[100001];
int chk[100001];

int main() {
  scanf("%d", &T);

  for(int t = 1; t <= T; t++) {
    result = 987654321;

    for(int i = 1; i <= 100000; i++) {
      arr[i] = 987654321012;
      chk[i] = false;
    }

    int begin = 0;
    int end = 0;

    scanf("%d %d %d %d", &N, &M, &begin, &end);

    int b = 0;
    int e = 0;
    int w = 0;

    vector<vector<pair<int, int>>> v(N + 1);
    pair<int, int> p;

    for(int i = 0; i < M; i++) {
      scanf("%d %d %d", &b, &e, &w);

      p = make_pair(e, w);

      v[b].push_back(p);

      p = make_pair(b, w);

      v[e].push_back(p);
    }

    arr[begin] = 0;

    queue<int> q;

    q.push(begin);

    while(!q.empty()) {
      int cur = q.front();

      q.pop();

      chk[cur] = false;

      for(int i = 0; i < v[cur].size(); i++) {
        if(arr[cur] + v[cur][i].second < arr[v[cur][i].first]) {
          arr[v[cur][i].first] = arr[cur] + v[cur][i].second;

          if(!chk[v[cur][i].first]) {
            q.push(v[cur][i].first);

            chk[v[cur][i].first] = true;
          }
        }
      }
    }

    result = arr[end];

    printf("#%d %ld\n", t, result);
  }

  return 0;
}