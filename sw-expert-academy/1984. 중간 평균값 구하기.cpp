#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int T;
int result;

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    result = 0;

    vector<int> v;

    int num;
    
    for(int i = 0; i < 10; i++) {
      cin >> num;

      v.push_back(num);
    }

    sort(v.begin(), v.end());

    float sum = 0;

    for(int i = 1; i < 9; i++) {
      sum += v[i];  
    }

    result = sum / 8 + 0.5;

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
