#include <iostream>

using namespace std;

int N;
int result;

struct Tree {
  string s;

  int l = 0;
  int r = 0;
};

struct Tree tree[1001];

void init() {
  for(int i = 1; i <= 1000; i++) {
    tree[i].l = 0;
    tree[i].r = 0;
  }
}

float solve(int n) {
  if(tree[n].l != 0 && tree[n].r != 0) {
    if(tree[n].s == "+") {
      return solve(tree[n].l) + solve(tree[n].r);
    }
    
    if(tree[n].s == "-") {
      return solve(tree[n].l) - solve(tree[n].r);
    }
    
    if(tree[n].s == "*") {
      return solve(tree[n].l) * solve(tree[n].r);
    }
    
    if(tree[n].s == "/") {
      return solve(tree[n].l) / solve(tree[n].r);
    }
  }else {
    return stoi(tree[n].s);
  }
}

int main() {
  for(int t = 1; t <= 10; t++) {
    init();

    cin >> N;

    for(int i = 1; i <= N; i++) {
      cin >> i >> tree[i].s;
        
      if(tree[i].s == "+" || tree[i].s == "-" || tree[i].s == "*" || tree[i].s == "/") {
        cin >> tree[i].l >> tree[i].r;
      }
    }
      
    result = solve(1);
      
    cout << '#' << t << ' ' << result << '\n';
  }
    
  return 0;
}
