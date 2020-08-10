#include <cstdio>

using namespace std;

int Tc, N, T, P;
int result, res;

char arr[2000][2000];
int cnt[2000];
int ar[2000];
int a[2000];

int main() {
  scanf("%d", &Tc);

  for(int t = 1; t <= Tc; t++) {
    res = 0;

    for(int i = 0; i < 2000; i++) {
      cnt[i] = 0;
      ar[i] = 0;
    }

    scanf("%d %d %d", &N, &T, &P);

    for(int i = 0; i < N; i++) {
      for(int j = 0; j < T; j++) {
        getchar();

        arr[i][j] = getchar();

        if(arr[i][j] == '1') {
          cnt[i]++;
        }else {
          ar[j]++;
        }
      }
    }

    int sum = 0;

    for(int i = 0; i < N; i++) {
      sum = 0;

      for(int j = 0; j < T; j++) {
        if(arr[i][j] == '1') {
          sum += ar[j];
        }
      }

      a[i] = sum;
    }

    result = a[P - 1];
    res = 1;

    for(int i = 0; i < N; i++) {
      if(a[i] > result || (a[i] == result && cnt[i] > cnt[P - 1])) {
        res++;
      }
      
      if(a[i] == result && cnt[i] == cnt[P - 1] && i < P - 1) {
        res++;
      }
    }

    printf("#%d %d %d\n", t, result, res);
  }

  return 0;
}
