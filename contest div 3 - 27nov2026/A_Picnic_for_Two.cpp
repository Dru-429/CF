#include <iostream>
#include <algorithm>
using namespace std;

int main () {
  int t;
  cin >> t;

  while(t--) {
    int l,a,b, count = 1;
    cin >> l >> a >> b;

    bool A[l] = {false}, B[l] = {false};
    
    int pos = 0;
    while (!A[pos]) {
      A[pos] = true;
      pos = (pos + a) % l;
    }

    pos = 0; 
    while(!B[pos]) {
      B[pos] = true;
      pos = (pos + b) %l;
    }

    for (int i = 1; i<l; i++) {
      if (A[i] && B[i]) {
        count++;
      }
    }
    cout << count << "\n";
  }
}