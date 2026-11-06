#include <iostream>
#include <set>
using namespace std;


int main() {
  int len;
  cin >> len;
  long long x, arr[len];
  set < long long> prefixSum;
  cin >> x;


  long long sum = 0;
  for (int i = 0; i<len; i++) {
    cin >>arr[i];
    sum += arr[i];
    if(sum == x) {
      cout << "YES" << endl;
      return 0;
    }
    if(prefixSum.find(sum-x) != prefixSum.end()) {
      cout << "YES" << endl;
      return 0;
    }
    prefixSum.insert(sum);
  }

  cout << "NO" << endl;
  return 0;
}