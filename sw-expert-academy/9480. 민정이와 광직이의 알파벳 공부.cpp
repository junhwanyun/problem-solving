#include <iostream>

using namespace std;

int TC, N;
int result;

string arr[15];
int a[26];

void solve(int n, int l, bool f) {
  if(f) {
    result++;
  }

  for(int i = n + 1; i < N; i++) {
    for(int j = 0; j < arr[i].length(); j++) {
      a[arr[i][j] - 'a']++;
    }

    f = true;

    for(int j = 0; j  < 26; j++) {
      if(a[j] == 0) {
        f = false;

        break;
      }
    }

    solve(i, l + arr[i].length(), f);

    for(int j = 0; j < arr[i].length(); j++) {
      a[arr[i][j] - 'a']--;
    }
  }
}

int main() {
  cin >> TC;

  for(int t = 1; t <= TC; t++) {
    result = 0;

    for(int i = 0; i < 26; i++) {
      a[i] = 0;
    }

    cin >> N;

    for(int i = 0; i < N; i++) {
      cin >> arr[i];
    }

    bool flag = false;

    for(int i = 0; i < N; i++) {
      for(int j = 0; j < arr[i].length(); j++) {
        a[arr[i][j] - 'a']++;
      }

      flag = true;

      for(int j = 0; j < 26; j++) {
        if(a[j] == 0) {
          flag = false;

          break;
        }
      }

      solve(i, arr[i].length(), flag);

      for(int j = 0; j < arr[i].length(); j++) {
        a[arr[i][j] - 'a']--;
      }
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
