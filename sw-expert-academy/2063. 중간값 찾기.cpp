#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;

int main() {
  cin >> N;

  vector<int> v;

  for(int i = 0; i < N; i++) {
    int score;

    cin >> score;

    v.push_back(score);
  }

  sort(v.begin(), v.end());

  cout << v[N / 2];

  return 0;
}
