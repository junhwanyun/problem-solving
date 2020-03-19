#include <iostream>
#include <vector>

using namespace std;

int N;
string result;

int main() {
  for(int t = 1; t <= 10; t++) {
    result = "";

    cin >> N;

    vector<char> v;

    char ch;

    for(int i = 0; i < N; i++) {
      cin >> ch;

      v.push_back(ch);
    }

    int it = 1;

    while(it < v.size()) {
      if(v[it] == v[it - 1]) {
        v.erase(v.begin() + it - 1, v.begin() + it + 1);

	it--;
      }else {
        it++;
      }
    }

    for(int i = 0; i < v.size(); i++) {
      result += v[i];
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;  
}
