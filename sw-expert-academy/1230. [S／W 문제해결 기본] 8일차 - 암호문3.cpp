#include <iostream>
#include <vector>

using namespace std;

char C;
int x, y, s;

int main() {
  for(int t = 1; t <= 10; t++) {
    int length;

    cin >> length;

    vector<int> v;

    int num;

    for(int i = 0; i < length; i++) {
      cin >> num;

      v.push_back(num);
    }

    cin >> length;

    for(int i = 0; i < length; i++) {
      cin >> C;

      if(C == 'A') {
        cin >> y;

	for(int j = 0; j < y; j++) {
	  cin >> s;

	  v.push_back(s);
	}
      }else {
	cin >> x >> y;

        if(C == 'I') {
	  for(int j = 0; j < y; j++) {
	    cin >> s;

	    v.insert(v.begin() + x + j, s);
	  }
	}else {
	  v.erase(v.begin() + x, v.begin() + x + y);
	}
      }
    }

    cout << '#' << t << ' ';

    for(int i = 0; i < 10; i++) {
      cout << v[i] << ' ';
    }

    cout << '\n';
  }

  return 0;
}
