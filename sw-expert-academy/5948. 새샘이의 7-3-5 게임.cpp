#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int T;
int result;

int arr[7];

int main() {
  scanf("%d", &T);

  for (int t = 1; t <= T; t++) {
    for (int i = 0; i < 7; i++) {
      scanf("%d", &arr[i]);
    }

    vector<int> v;

    int sum = 0;

    for (int i = 0; i < 5; i++) {
      sum = arr[i];

      for (int j = i + 1; j < 6; j++) {
        sum += arr[j];

        for (int k = j + 1; k < 7; k++) {
          sum += arr[k];

          v.push_back(sum);

          sum -= arr[k];
        }

        sum -= arr[j];
      }
    }

    sort(v.begin(), v.end(), greater<int>());

    unique(v.begin(), v.end());

    result = v[4];

    printf("#%d %d\n", t, result);
  }

  return 0;
}
