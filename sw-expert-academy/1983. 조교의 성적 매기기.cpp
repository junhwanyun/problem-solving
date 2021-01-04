#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int T, N, K;
string result;

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    cin >> N >> K;

    vector<float> v;
   
    int mid = 0;
    int fin = 0;
    int assign = 0;

    float total = .0;
    float target = .0;

    for(int i = 1; i <= N; i++) {
      total = .0;

      cin >> mid >> fin >> assign;

      total += mid * 0.35 + fin * 0.45 + assign * 0.2;

      v.push_back(total);

      if(i == K) {
        target = total;
      }
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < N; i++) {
      if(v[i] == target) {
	if(i < N / 10) {
	  result = "D0";
	}else if(i < 2 * N / 10) {
	  result = "C-";
	}else if(i < 3 * N / 10) {
	  result = "C0";
	}else if(i < 4 * N / 10) {
	  result = "C+";
	}else if(i < 5 * N / 10) {
          result = "B-";
        }else if(i < 6 * N / 10) {
          result = "B0";
        }else if(i < 7 * N / 10) {
          result = "B+";
        }else if(i < 8 * N / 10) {
          result = "A-";
        }else if(i < 9 * N / 10) {
          result = "A0";
        }else {
          result = "A+";
        }
      }
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
