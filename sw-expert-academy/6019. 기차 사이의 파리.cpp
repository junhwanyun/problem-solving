#include <cstdio>

using namespace std;

int T, D, A, B, F;
double result;

int main() {
  scanf("%d", &T);

  for(int t = 1; t <= T; t++) {
    scanf("%d %d %d %d", &D, &A, &B, &F);

    result = D / (double)(A + B) * F;

    printf("#%d %lf\n", t, result);
  }

  return 0;
}
