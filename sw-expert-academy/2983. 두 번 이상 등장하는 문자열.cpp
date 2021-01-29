#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int T, L;
string S;
int result;

class C {
 int i;
 int r;
 int nr;

  public:
    C(int _i, int _r, int _nr) {
      i = _i;
      r = _r;
      nr = _nr;
    }

    int getI();

    int getR();
    void setR(int _r);
			          
    int getNr();
    void setNr(int _nr);
};

int C::getI() {
  return i;
}

int C::getR() {
  return r;
}

void C::setR(int _r) {
  r= _r;
}

int C::getNr() {
  return nr;
}

void C::setNr(int _nr) {
  nr = _nr;
}


bool cmp(C cp, C cn) {
  if(cp.getR() == cn.getR()) {
    return cp.getNr() < cn.getNr();
  }else {
    return cp.getR() < cn.getR();
  }
}

int main() {
  scanf("%d", &T);
	    
  for(int t = 1; t <= T; t++) {
    result = 0;

    scanf("%d", &L);
    cin >> S;

    vector<C> v;

    for(int i = 0; i < L; i++) {
      C c = C(i, S[i] - 'a', -1);

      v.push_back(c);
    }
					    
    for(int i = 0; i < L - 1; i++) {
      v[i].setNr(v[i + 1].getR());
    }

    v[L - 1].setNr(-1);

    sort(v.begin(), v.end(), cmp);

    int rank = 0;
    int prev = 0;

    int *array = new int[L];

    for(int i = 4; i < 2 * L; i <<= 1) {
      rank = 0;
      prev = v[0].getR();

      v[0].setR(rank);
      array[v[0].getI()] = 0;

      for(int j = 1; j < L; j++) {
        if(prev != v[j].getR() || v[j].getNr() != v[j - 1].getNr()) {
	  rank++;
	}

	prev = v[j].getR();

	v[j].setR(rank);

        array[v[j].getI()] = j;
      }

      int ni = 0;

      for(int j = 0; j < L; j++) {
	ni = v[j].getI() + i / 2;

        if(ni >= L) {
          v[j].setNr(-1);

          continue;
        }

        v[j].setNr(v[array[ni]].getR());
      }

      sort(v.begin(), v.end(), cmp);
    }

    int *arr = new int[L];
    int *ar = new int[L];
    int *a = new int[L];

    for(int i = 0; i < L; i++) {
      arr[i] = v[i].getI();
    }

    for(int i = 0; i < L; i++) {
      ar[arr[i]] = i;
    }

    int temp = 0;
    int tmp = 0;

    for(int i = 0; i < L; i++) {
      if(ar[i] == L - 1) {
        temp = 0;

        continue;
      }

      tmp = arr[ar[i] + 1];

      while(i + temp < L && tmp + temp < L) {
        if(S[i + temp] != S[tmp + temp]) {
          break;
        }

        temp++;
      }

      a[ar[i]] = temp;

      if(temp > 0) {
        temp--;
      }
    }

    for(int i = 0; i < L; i++) {
      result = max(result, a[i]);
    }

    printf("#%d %d\n", t, result);
  }

  return 0;
}
