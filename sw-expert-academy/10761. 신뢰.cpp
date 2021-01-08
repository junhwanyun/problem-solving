#include <iostream>
#include <queue>

using namespace std;

int TC, N;
int result;

int main() {
  cin >> TC;

  for(int t = 1; t <= TC; t++) {
    result = 0;

    cin >> N;

    char robot = ' ';
    int x;
    
    queue<int> O, B;
    queue<char> q;
    
    for(int i = 0; i < N; i++) {
      cin >> robot >> x;

      if(robot == 'O') {
	      O.push(x);
        q.push('O');
      }else {
        B.push(x);
        q.push('B');
      }
    }

    int o = 1;
    int b = 1;

    bool flag = false;

    while(true) {
      if(O.empty() && B.empty()) {
        break;
      }

      result++;

      
      flag = false;

      if(!O.empty()) {
        if(o < O.front()) {
          o++;
        }else if(o > O.front()) {
          o--;
        }else {
          if(q.front() == 'O') {
            flag = true;

            O.pop();
            q.pop();
          }
        }
      }
      
      if(!B.empty()) {
        if(b < B.front()) {
          b++;
        }else if(b > B.front()) {
          b--;
        }else {
          if(q.front() == 'B' && !flag) {
            B.pop();
            q.pop();
          }
        }
      }
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}