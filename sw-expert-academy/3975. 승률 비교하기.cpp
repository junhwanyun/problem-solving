#include <cstdio>
#include <string>

using namespace std;

int T, A, B, C, D;
string result;

int main() {
  scanf("%d", &T);

  for(int t = 1; t <= T; t++) {
    scanf("%d %d %d %d", &A, &B, &C, &D);

    if(A / (double)B > C / (double)D) {
      result = "ALICE";
    }else if(A / (double)B == C / (double)D) {
      result = "DRAW";
    }else {
      result = "BOB";
    }

    printf("#%d %s\n", t, result.c_str());
  }

  return 0;
}
