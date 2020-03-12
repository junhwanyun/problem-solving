#include <iostream>
#include <string>

using namespace std;

int T;
int result;

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    string str;

    cin >> str;

    int length;

    cin >> length;

    string s;

    string arr[10] = {"ZRO", "ONE", "TWO", "THR", "FOR", "FIV", "SIX", "SVN", "EGT", "NIN"};

    int a[10] = {0, };
    
    for(int i = 0; i < length; i++) {
      cin >> s;

      for(int j = 0; j < 10; j++) {
        if(arr[j] == s) {
	  a[j]++;

	  break;
	}
      }
    }

    cout << str << '\n';

    for(int i = 0; i < 10; i++) {
      for(int j = 0; j < a[i]; j++) {
        cout << arr[i] << ' ';
      }
    }

    cout << '\n';
  }

  return 0;
}
