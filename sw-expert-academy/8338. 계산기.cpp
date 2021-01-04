#include <cstdio>

using namespace std;

int T, N;
int result;

int main() {
  scanf("%d", &T);

  for(int t = 1; t <= T; t++) {
    result = 0;

    scanf("%d", &N);

    int a;

    for(int i = 0; i < N; i++) {
      scanf("%d", &a);

      if(result + a > result * a) {
        result += a;
      }else {
        result *= a;
      }
    }

    printf("#%d %d\n", t, result);
  }

  return 0;
}
