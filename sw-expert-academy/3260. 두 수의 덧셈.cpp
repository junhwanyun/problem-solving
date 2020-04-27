#include <iostream>
#include <algorithm>

using namespace std;

int T;
string A, B;
string result;

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    result = "";

    cin >> A >> B;

    reverse(A.begin(), A.end());
    reverse(B.begin(), B.end());

    int num = 0;
    int carry = 0;

    if(A.length() < B.length()) {
      for(int i = 0; i < A.length(); i++) {
        num = A[i] - '0' + B[i] - '0' + carry;

        if(num > 9) {
          num -= 10;
          carry = 1;
        }else {
          carry = 0;
        }

        result += to_string(num);
      }

      for(int i = A.length(); i < B.length(); i++) {
        num = B[i] - '0' + carry;

        if(num > 9) {
          num -= 10;
          carry = 1;
        }else {
          carry = 0;
        }

        result += to_string(num);
      }
    }else {
      for(int i = 0; i < B.length(); i++) {
        num = A[i] - '0' + B[i] - '0' + carry;

        if(num > 9) {
          num -= 10;
          carry = 1;
        }else {
          carry = 0;
        }

        result += to_string(num);
      }

      for(int i = B.length(); i < A.length(); i++) {
        num = A[i] - '0' + carry;

        if(num > 9) {
          num -= 10;
          carry = 1;
        }else {
          carry = 0;
        }

        result += to_string(num);
      }
    }
      
    if(carry == 1) {
      result += '1';
    }

    reverse(result.begin(), result.end());

    cout << '#' << t << ' ' << result << '\n';
  }

  return 0;
}
