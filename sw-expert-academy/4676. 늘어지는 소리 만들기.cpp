#include <iostream>

using namespace std;

int T, H;

int arr[21];

int main() {
  cin >> T;

  for(int t = 1; t <= T; t++) {
    for(int i = 0; i <= 20; i++) {
      arr[i] = 0;
    }

    string str;

    cin >> str;

    cin >> H;

    int index = 0;

    for(int i = 0; i < H; i++) {
      cin >> index;

      arr[index]++;
    }

    cout << '#' << t << ' ';

    for(int i = 0; i < str.length(); i++) {
      for(int j = 0; j < arr[i]; j++) {
        cout << '-';
      }

      cout << str[i];
    }

    for(int i = 0; i < arr[str.length()]; i++) {
      cout << '-';
    }

    cout << '\n';
  }

  return 0;
}
