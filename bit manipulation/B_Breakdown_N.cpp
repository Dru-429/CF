#include <iostream>
using namespace std;

#define int long long

signed main () {
  
  int n, curr = 1, ans =0;
  cin >> n;

  while (curr <= n) {
    curr *= 2;
  }
  curr /= 2;

  while(ans < n) {
    if((ans + curr) <= n) {
      ans += curr;
      cout << curr << " ";
    }
    curr /= 2;
  }
  cout << "\n";
  return 0;
}