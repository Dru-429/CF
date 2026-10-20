#include <iostream>
using namespace std;

int main () {
  int t; 
  cin >> t;

  while (t--) {
    long l,r;       
    long long sum = 0;
    cin >> l >> r;

    if (l==r) {
      sum = l;
    }
    else if (l != 1 && r != 1) {
      sum = (r*(r+1)/2 - (l*(l+1)/2));
    }
    else {
      sum = (r*(r+1)/2);
    }
    cout << sum << endl;
  }

  return 0; 
}