#include <iostream>
#include <map>
using namespace std;

int main () {
  int len, k;
  long long ans = 0, l = 0 ;
  cin >> len >> k;
  long long arr[len];
  map <int, int > m;

  for (int i = 0; i< len; i++) {
    cin >> arr[i];
    m[arr[i]] ++;
    
    while (m.size() > k ) {
      l++;
      m[arr[l]]--;
      if( m[arr[l]] == 0) {
        m.erase(arr[l]);
      }
    }
    ans += i-l + 1;
  }
  cout << ans << endl;
  return 0;
}