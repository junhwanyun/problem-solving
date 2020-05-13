#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int T, N;
int result;

bool arr[1001];

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    result = -1;

    for(int i = 0; i <= 1000; i++) {
      arr[i] = false;
    }

    cin >> N;

    char num = ' ';

    vector<char> v;

    for(int i = 0; i < N; i++) {
      cin >> num;

      v.push_back(num);

      arr[num - '0'] = true;
    }

    for(int i = 0; i < 10; i++) {
      if(!arr[i]) {
        result = i;

        break;
      }
    }
    
    if(result < 0) {
      string str = "";

      for(int i = 2; i < 4; i++) {
        for(int j = 0; j < v.size() - i + 1; j++) {
          str = "";

          for(int k = 0; k < i; k++) {
            str += v[j + k];
          }

          arr[stoi(str)] = true;
        }

        for(int j = pow(10, i - 1); j < pow(10, i); j++) {
          if(!arr[j]) {
            result = j;

            break;
          }
        }
          
        if(result > 0) {
          break;
        }
      }
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
