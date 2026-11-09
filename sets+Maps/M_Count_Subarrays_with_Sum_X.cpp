#include <iostream>
#include <map>
using namespace std;

int main() {
  int len;
  long long key, prefixSum = 0, ans = 0;
  cin >> len >> key;
  map<long long, long long> m;

  for (int i = 0; i < len; i++) {
    long long x;
    cin >> x;
    prefixSum += x;
    auto req = m.find(prefixSum - key);
    
    if( req != m.end()) {
      ans += req->second;
    }
    if (prefixSum == key) {
      ans ++ ;
    }
    if( m.find(prefixSum) != m.end()) {
      m[prefixSum]++;    
    }
    else {
      m[x] = 1;    
    }
  }
  cout << ans << endl;
  return 0;
}