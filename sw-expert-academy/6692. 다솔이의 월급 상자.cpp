#include <cstdio>

using namespace std;

int T, N;
double result;

int main() {
  scanf("%d", &T);

  for(int t = 1; t <= T; t++) {
    result = 0.0;

    scanf("%d", &N);

    double p;
    int x;

    for(int i = 0; i < N; i++) {
      scanf("%lf %d", &p, &x);

      result += p * x;
    }

    printf("#%d %lf\n", t, result);
  }

  return 0;
}
