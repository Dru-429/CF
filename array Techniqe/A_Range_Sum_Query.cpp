#include <iostream>
using namespace std;

int main () {
  int n, t, l,r;
  cin >> n;
  long long arr[n];
  long long prefixSum[n]= {0};

  for (int i = 0; i< n; i++) {
    cin >> arr[i];
  }
  for (int i = 0; i< n; i++) {
    prefixSum[i] = ( i == 0 ? arr[i] : prefixSum[i-1] + arr[i] );
  }

  cin >> t;
  
  while(t--) {
    cin >> l >> r;
    long long sum = 0;
    sum = prefixSum[r-1] - (l > 1 ? prefixSum[l-2] : 0);

    cout << sum << endl;
  }

}