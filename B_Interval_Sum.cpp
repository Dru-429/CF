#include <iostream>
using namespace std;

int main () {
  int t; 
  cin >> t;

  while(t--) {
    int l,r;
    int long sum = 0;
    cin >> l >> r;
    
    for (int i = l; i <= r; i++) {
      sum += i;
    }
    cout << sum << endl;
  }

  return 0;
}