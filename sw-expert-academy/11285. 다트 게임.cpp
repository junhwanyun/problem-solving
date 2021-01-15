#include <cstdio>

using namespace std;

int TC, N;
int result;

int main() {
  scanf("%d", &TC);

  for(int t = 1; t <= TC; t++) {
    result = 0;

    scanf("%d", &N);

    int x, y;

    for(int i = 0; i < N; i++) {
      scanf("%d %d", &x, &y);

      if(x * x + y * y <= 400) {
	  result += 10;
      }else if(x * x + y * y <= 1600) {
	  result += 9;
      }else if(x * x + y * y <= 3600) {
	  result += 8;
      }else if(x * x + y * y <= 6400) {
	  result += 7;
      }else if(x * x + y * y <= 10000) {
	  result += 6;
      }else if(x * x + y * y <= 14400) {
	  result += 5;
      }else if(x * x + y * y <= 19600) {
	  result += 4;
      }else if(x * x + y * y <= 25600) {
	  result += 3;
      }else if(x * x + y * y <= 32400) {
	  result += 2;
      }else if(x * x + y * y <= 40000) {
        result += 1;
      }
    }

    printf("#%d %d\n", t , result);
  }

  return 0;
}