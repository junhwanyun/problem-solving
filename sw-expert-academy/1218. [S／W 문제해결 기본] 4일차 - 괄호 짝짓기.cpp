#include <iostream>
#include <string>

using namespace std;

int result;

int main() {
  for(int t = 1; t <= 10; t++) {
    result = 1;

    int length;

    string str;

    cin >> length;

    cin >> str;

    int flagP = 0;
    int flagS = 0;
    int flagB = 0;
    int flagA = 0;

    for(int i = 0; i < length; i++) {
      switch(str[i]) {
	case '(':
          flagP++;
	  break;
	case ')':
	  flagP--;
	  break;
	case '[':
	  flagS++;
	  break;
	case ']':
	  flagS--;
	  break;
	case '{':
	  flagB++;
	  break;
	case '}':
	  flagB--;
	  break;
	case '<':
	  flagA++;
	  break;
	case '>':
	  flagA--;
	  break;
	default:
	  break;
      }

      if(flagP < 0 || flagS < 0 || flagB < 0 || flagA < 0) {
        result = 0;

	break;
      }
    }

    if(flagP || flagS || flagB || flagA) {
      result = 0;
    }

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
