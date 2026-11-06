#include <iostream>
#include <map>
using namespace std;

int main() {
  int len;
  long long key, prefixSum = 0;
  cin >> len >> key;
  map<long long, long long> m;

  for (int i = 1; i <= len; i++) {
    long long x;
    cin >> x;
    prefixSum += x;
    auto req = m.find(prefixSum - key);
    
    if( req != m.end()) {
      cout << req -> second << " " << i << endl;
      return 0;
    }
    if (prefixSum == key) {
      cout << 1 << " " << i << endl;
      return 0;
    }
    else {
      m[x] = i;    
    }
  }
  cout << -1 << endl;
  return 0;
}