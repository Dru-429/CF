#include <iostream> 
using namespace std;

#define long long int 
const int n = 1e6;
int spf[n];

void pre() {
  for (int i =0; i<=n; i++) {
    spf[i] = i;
  }

  for (int i = 2; i<n; i++ ) {
    if(spf[i] == i) {
      for(int j = i; j<=n; j+=i) {
        spf[j] = min(spf[j], i);
      }
    }
  }
}

signed main () {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  pre();

  while(t--) {
    int x, prev = 0, count = 0;
    cin >> x;

    while ( x != 1)
    {
      prev = spf[x];
      x/= spf[x];

      if (spf[x] == prev)
      {
        count++;
        continue;
      }
      else {
        cout << prev << "^" << count+1 << " " ; 
        count = 0;
      } 
    }
    cout << "\n";
  }
}