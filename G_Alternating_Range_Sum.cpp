#include <iostream>
using namespace std;

int main () {
  int n, t, l,r;
  cin >> n >> t;
  long long arr[n];
  long long prefixSum[n]= {0};

  for (int i = 0; i< n; i++) {
    cin >> arr[i];
  }
  for (int i = 0; i< n; i++) {
    long curr = (i % 2 == 0 ? arr[i] : -arr[i]) ;
    prefixSum[i] = ( i == 0 ? curr : prefixSum[i-1] + curr );
  }
  
  while(t--) {
    cin >> l >> r;
    long long sum = 0;
    sum = prefixSum[r-1] - (l > 1 ? prefixSum[l-2] : 0);
    if (l % 2 == 0) {
      sum = -sum; 
    }

    cout << sum << endl;
  }

}