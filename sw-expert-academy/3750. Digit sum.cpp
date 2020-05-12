#include <cstdio>

using namespace std;

int T;
int result;

int main() {
  scanf("%d", &T);

  for(int t = 1; t <= T; t++) {
    long long n;

    scanf("%lld", &n);

    int sum = 0;

    while(n > 9) {
      sum = 0;

      while(n) {
        sum += n % 10;

        n /= 10;
      }

      n = sum;
    }

    result = n;

    printf("#%d %d\n", t, result);
  }

  return 0;
}
