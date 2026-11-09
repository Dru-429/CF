#include <iostream>
#include <map>
using namespace std;

int main () {
  int n, k;
  long long prefixSum =0, ans = 0;
  cin >> n >> k;
  map <long long, long long> m;

  for (int i = 0; i<k; i++) {
    long long x;
    cin >> x;
    prefixSum += x;
    m[i] = x;
    ans = prefixSum;
  }

  for (int i = k; i< n; i++){
    long long x;
    cin >> x;
    prefixSum += x;
    prefixSum -= m[i-k];
    m[i] = x;
    if (prefixSum > ans) {
      ans = prefixSum;
    }
  }
  cout << ans << endl;
  return 0;
}