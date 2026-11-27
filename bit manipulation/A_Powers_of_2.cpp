#include <iostream>
using namespace std;

#define int long long

signed main () {
  int n, curr = 1;
  cin >> n;

  while(curr <= n) {
    cout << curr << " ";
    curr *=2;
  }
  cout << "\n";
  return 0;
}