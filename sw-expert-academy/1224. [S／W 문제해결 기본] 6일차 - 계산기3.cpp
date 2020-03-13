#include <iostream>
#include <string>
#include <vector>

using namespace std;

int result;

int main() {
  for(int t = 1; t <= 10; t++) {
    int length;

    cin >> length;

    string str;

    cin >> str;

    vector<char> v;
    vector<char> vc;
    
    for(int i = 0; i < length; i++) {
      switch(str[i]) {
        case ')':
	  while(vc.back() != '(') {
	    v.push_back(vc.back());

	    vc.pop_back();
	  }

	  vc.pop_back();
	  break;
	case '+':
	  while(!vc.empty() && vc.back() != '(') {
	    v.push_back(vc.back());

	    vc.pop_back();
	  }

	  vc.push_back(str[i]);
	  break;
	case '(':
	case '*':
	  vc.push_back(str[i]);
	  break;
	default:
	  v.push_back(str[i]);
	  break;
      }
    }

    while(!vc.empty()) {
      v.push_back(vc.back());

      vc.pop_back();
    }

    vector<int> vi;

    int cal = 0;

    for(int i = 0; i < v.size(); i++) {
      if(v[i] == '*') {
        cal = vi.back();

	vi.pop_back();

	cal *= vi.back();

	vi.pop_back();

	vi.push_back(cal);
      }else if(v[i] == '+') {
	cal = vi.back();

        vi.pop_back();

        cal += vi.back();

        vi.pop_back();

        vi.push_back(cal);
      }else {
        vi.push_back(v[i] - '0');
      }
    }

    result = vi.back();

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
