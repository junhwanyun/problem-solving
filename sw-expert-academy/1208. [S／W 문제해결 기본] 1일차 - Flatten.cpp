#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;
int result;

int main() {
  for(int t = 1; t <= 10; t++) {
    cin >> N;
    
    result = 0;

    vector<int> v;

    int height;

    for(int i = 0; i < 100; i++) {
      cin >> height;

      v.push_back(height);
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < N; i++) {
      v[99]--;
      v[0]++;

      sort(v.begin(), v.end());

      if(v[99] - v[0] <= 1) {
        break;
      }
    }

    result = v[99] - v[0];

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
