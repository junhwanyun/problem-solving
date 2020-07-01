#include <iostream>
#include <utility>

using namespace std;

int T, N, M;
int result;

pair<string, int> arr[100];

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    result = 0;

    cin >> N >> M;

    pair<string, int> p;

    string str;
    int m;

    for(int i = 0; i < N; i++) {
      cin >> str >> m;

      p = make_pair(str, m);

      arr[i] = p;
    }

    string s;

    bool flag = false;

    for(int i = 0; i < M; i++) {
      cin >> s;

      for(int j = 0; j < N; j++) {
        flag = true;

        for(int k = 0; k < 8; k++) {
          if(arr[j].first[k] != '*' && s[k] != arr[j].first[k]) {
            flag = false;

            break;
          }
        }

        if(flag) {
          result += arr[j].second;
        }
      }
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
