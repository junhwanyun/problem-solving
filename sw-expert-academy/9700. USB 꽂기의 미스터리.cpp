#include <iostream>

using namespace std;

int TC;
string result;

int main() {
  cin >> TC;

  for(int t = 1; t <= TC; t++) {
    double p;
    double q;

    cin >> p >> q;

    float s1 = (1 - p) * q;
    float s2 = p * (1 - q) * q;

    if(s1 < s2) {
      result = "YES";
    }else {
      result = "NO";
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
