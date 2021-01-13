#include <cstdio>
#include <vector>

using namespace std;

int T, A;
int result;

bool arr[3163];

int main() {
  for(int i = 2; i < 3163; i++) {
    arr[i] = true;
  }

  for(int i = 2; i < 57; i++) {
    if(arr[i]) {
      for(int j = i * i; j < 3163; j += i) {
        arr[j] = false;
      }
    }
  }

  vector<int> v;

  for(int i = 2; i < 3163; i++) {
    if(arr[i]) {
      v.push_back(i);
    }
  }

  scanf("%d", &T);

  for(int t = 1; t <= T; t++) {
    result = 1;

    scanf("%d", &A);

    int cnt = 0;

    for(int i = 0; i < v.size(); i++) {
      if(v[i] <= A) {
        cnt = 0;

        while (A % v[i] == 0) {
          cnt++;

          A /= v[i];
        }

        if(cnt % 2 == 1) {
          result *= v[i];
        }
      }
    }

    if(A > 1) {
      result *= A;
    }
    
    printf("#%d %d\n", t, result);
  }

  return 0;
}