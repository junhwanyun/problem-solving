#include <iostream>

using namespace std;

int T;
int result;

int scores[101] = {0, };

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    cin >> t;

    result = 0;

    for(int i = 0; i <= 100; i++) {
      scores[i] = 0;
    }

    int score;

    for(int i = 0; i < 1000; i++) {
      cin >> score;

      scores[score]++;
    }

    int max = 0;

    for(int i = 100; i >= 0; i--) {
      if(scores[i] > max) {
        max = scores[i];

        result = i;
      }
    }

    cout << '#' <<  t << ' ' << result << '\n';
  }

  return 0;
}
