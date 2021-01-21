#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int T, X;
int result;

bool arr[10];

vector<pair<int, int>> v;
pair<int, int> p;

int solve(int c, long x, int r, int l) {
  if (c >= l || x > X) {
    return 987654321;
  }

  if (x == X) {
	  return r;
  }

  int result = 987654321;

  result = min(result, solve(c, x * (long) v[c].first, r + v[c].second + 1, l));
  result = min(result, solve(c + 1, x * (long) v[c].first, r + v[c].second + 1, l));
  result = min(result, solve(c + 1, x, r, l));

  return result;
}

int main() {
  cin >> T;

  for (int x = 1; x <= T; x++) {
    result = 0;

    v.clear();

	  int integer = 0;

    for(int i = 0; i < 10; i++) {
      cin >> integer;

      if(integer == 1) {
        arr[i] = true;
      }else {
        arr[i] = false;
      }
    }

    cin >> X;

	  integer = X;
	
    bool flag = false;

	
	  while (integer > 0) {
	    if (!arr[integer % 10]) {
		    flag = 1;
		
        break;
	    }

	    integer /= 10;

	    result++;
	  }

    if (!flag) {
      result++;
	  }else {
	    for (int i = 2; i <= X / 2; i++) {
	      if (X % i == 0) {
		      flag = false;
          
          integer = i;
          
          result = 0;
          
          while (integer > 0) {
            if (!arr[integer % 10]) {
              flag = 1;
              
              break;
            }
            
            integer /= 10;
            
            result++;
          }
          
          if (!flag) {
            p = make_pair(i, result);

			      v.push_back(p);
          }
		    }
	    }
      
      result = solve(0, 1, 0, v.size());
      
      if (result == 987654321) {
        result = -1;
      }
    }

    cout << '#' << x << ' ' << result << '\n';
  }

  return 0;
}