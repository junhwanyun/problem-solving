#include <iostream>
#include <cmath>

using namespace std;

bool arr[999984];

int main() {
  for(int i = 2; i < 999984; i++) {
    arr[i] = true;
  }

  for(int i = 2; i <= sqrt(999984); i++) {
    if(arr[i]) {
      for(int j = i * i; j < 999984; j += i) {
        arr[j] = false;
      }
    }
  }

  for(int i = 2; i < 999984; i++) {
    if(arr[i]) {
      cout << i << ' ';
    }
  }
  
  return 0;
}
