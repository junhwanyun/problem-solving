#include <cstdio>

using namespace std;

int T, L;
long long result;

int main() {
  scanf("%d", &T);

  for(int t = 1; t <= T; t++) {
    scanf("%d", &L);

    result = (long long)(L / 2) * (L / 2);

    printf("#%d %lld\n", t, result);
  }

  return 0;
}
