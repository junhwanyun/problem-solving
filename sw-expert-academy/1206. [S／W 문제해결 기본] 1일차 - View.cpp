#include <iostream>
#include <vector>

using namespace std;

int N;
int result;

int main() {
  for(int t = 1; t <= 10; t++) {
    cin >> N;

    result = 0;

    vector<int> v;

    int height;
    
    for(int i = 0; i < N; i++) {
      cin >> height;

      v.push_back(height);
    }

    for(int i = 2; i < N - 2; i++) {
      int views = 987654321;

      views = min(views, v[i] - v[i - 1]);
      views = min(views, v[i] - v[i - 2]);
      views = min(views, v[i] - v[i + 1]);
      views = min(views, v[i] - v[i + 2]);

      if(views[i] > 0) {
        result += views;
      }
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
