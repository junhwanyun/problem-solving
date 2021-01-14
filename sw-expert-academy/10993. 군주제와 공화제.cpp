#include <iostream>

using namespace std;

int TC, N;
int result[1001];

double arr[1001][1001];

int solve(int i) {
  if(result[i] == 0 || result[i] == 1001) {
    return i;
  }else {
    return solve(result[i]);
  }
}

int main() {
  cin >> TC;

  for(int t = 1; t <= TC; t++) {
    cin >> N;

    int x[1001];
    int y[1001];
    int s[1001];
    
    for(int i = 1; i <= N; i++) {
      cin >> x[i] >> y[i] >> s[i];
    }

    for(int i = 1; i < N; i++) {
      for(int j = 1 + 1; j <= N; j++) {
        if(i != j) {
          arr[i][j] = s[i] / (double) ((y[j] - y[i]) * (y[j] - y[i]) + (x[j] - x[i]) * (x[j] - x[i]));
          arr[j][i] = s[j] / (double) ((y[i] - y[j]) * (y[i] - y[j]) + (x[i] - x[j]) * (x[i] - x[j]));
        }
      }
    }

    double max = 0.0;

    int cnt = 0;
    int parent = 0;

    for(int i = 1; i <= N; i++) {
      max = s[i];

      cnt = 0;

      for(int j = 1; j <= N; j++) {
        if(i != j) {
          if(arr[j][i] > max) {
            max = arr[j][i];
            cnt = 1;
            parent = j;
          }else if(max > s[i] && arr[j][i] == max) {
            cnt++;
          }
        }
      }

      if(cnt == 1) {
        result[i] = parent;
      }else if(cnt == 0) {
        result[i] = 0;
      }else {
        result[i] = 1001;
      }
    }
      
    for(int i = 1; i <= N; i++) {
      if(result[i] == 0) {
      }else if(result[i] == 1001) {
      }else {
        result[i] = solve(result[i]);
      }
    }

    cout << '#' << t;

    for(int i = 1; i <= N; i++) {
      if(result[i] == 0) {
        cout << " K";
      }else if(result[i] == 1001) {
        cout << " D";
      }else {
        cout << ' ' << result[i];
      }
    }

    cout << '\n';
  }

  return 0;
}