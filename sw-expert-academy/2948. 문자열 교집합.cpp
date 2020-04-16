#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int T, N, M;
int result;

int main() {
  scanf("%d", &T);

  for(int t = 1; t <= T; t++) {
    result = 0;

    scanf("%d %d", &N, &M);

    vector<string> v;
    vector<string> vs;

    string str;

    for(int i = 0; i < N; i++) {
      scanf("%s", str.c_str());

      v.push_back(str.c_str());
    }

    for(int i = 0; i < M; i++) {
       scanf("%s", str.c_str());

      vs.push_back(str.c_str());
    }

    sort(v.begin(), v.end());
    sort(vs.begin(), vs.end());

    while(!v.empty() && !vs.empty()) {
      if(v.back() == vs.back()) {
        result++;

        v.pop_back();
        vs.pop_back();
      }else if(v.back() > vs.back()) {
        v.pop_back();
      }else {
        vs.pop_back();
      }
    }

    printf("#%d %d\n", t, result);
  }

  return 0;
}
