#include <iostream>
using namespace std;

long long countFactors( long long num) {
  int count = 0;
  for (long long i =1; i*i <=num; i++) {
    if (num % i == 0) {
      count++;
      if (i != num/i) {
        count++;
      }
    }
  }
  return count;
}

int main () {
  int n,t,k;
  cin >> n >> t >> k;
  long long arr[n], prefixFact[n]= {0};
  
  for (int i =0; i<n ; i++) {
    cin >> arr[i];

    prefixFact[i] = (i == 0 ? (countFactors(arr[i]) == k ? 1 : 0) : prefixFact[i-1] + (countFactors(arr[i]) == k ? 1 : 0));
  }

  while(t--) {
    int l,r; 
    cin >> l >> r;
    l--; r--;
    long long sum = 0;
    sum = prefixFact[r] - (l> 0 ? prefixFact[l-1]: 0);
    cout << sum << endl;
  }
  return 0;

}