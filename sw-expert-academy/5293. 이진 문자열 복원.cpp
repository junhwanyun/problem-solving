#include <iostream>

using namespace std;

int T, A, B, C, D;
string result;

void solve(int a, int b, int c, int d, string s) {
  if(result != "") {
    return;
  }

  if(a == 0 && b == 0 && c == 0 && d == 0) {
    result = s;
    
    return;
  }

  if(s[s.length() - 1] == '0') {
    if(a > 0) {
      solve(a - 1, b, c, d, s + '0');
    }

    if(b > 0 && b == c || b == c + 1) {
      solve(a, b - 1, c, d, s + '1');
    }
  }else {
    if(c > 0 && c == b || c == b + 1) {
      solve(a, b, c - 1, d, s + '0');
    }

    if(d > 0) {
      solve(a, b, c, d - 1, s + '1');
    }
  }
}

int main() {
  scanf("%d", &T);
  
  for(int t = 1; t <= T; t++) {
    result = "";

    scanf("%d %d %d %d", &A, &B, &C, &D);

    solve(A, B, C, D, "0");
    solve(A, B, C, D, "1");

    if(result == "") {
      result = "impossible";
    }

    printf("#%d %s\n", t, result.c_str());
  }

  return 0;
}
