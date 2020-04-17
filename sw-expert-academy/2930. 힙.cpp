#include <cstdio>
#include <queue>

using namespace std;

int T, N;

int main() {
  scanf("%d", &T);

  for(int t = 1; t <= T; t++) {
    scanf("%d", &N);

    int command = 0;

    int x;

    priority_queue<int, vector<int>> pq;

    printf("#%d ", t);

    for(int i = 0; i < N; i++) {
      scanf("%d", &command);

      if(command == 1) {
        scanf("%d", &x);

        pq.push(x);
      }else {
        if(pq.empty()) {
          printf("-1 ");
        }else {
          printf("%d ", pq.top());
            
          pq.pop();
        }
      }
    }

    printf("\n");
  }

  return 0;
}
