#include <iostream>
#include <vector>
using namespace std;

int main () {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);  

  int limit, t;
  cin >> limit >> t;
  
  vector <int> prefix(limit + 1, 0);
  vector <bool> isPrime(limit + 1, true);

  isPrime[0] = isPrime[1] = false;

  for (int i = 2; (long long)i*i <=limit; i++) {
    if (isPrime[i]) {
      for (int j = i*i; j<=limit; j+=i) {
        isPrime[j] = false;
      }
    } 
  }

  for (int i = 1; i<=limit; i++) {
    prefix[i] = prefix[i-1] + isPrime[i];
  }

  while(t--) {
    int l,r;
    cin >> l >> r;

    cout << prefix[r] - prefix[l-1] << "\n";
  }
  return 0;
}