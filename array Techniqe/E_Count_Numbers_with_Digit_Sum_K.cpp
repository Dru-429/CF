#include <iostream>
using namespace std;

int didgitSums(long long n) {
  int sum = 0;
  while(n > 0) {
    sum += n%10;
    n /=10;
  }

  return sum;
}

int main () {
  int n, t,k, l,r;
  cin >> n;
  cin >> t;
  cin >> k;

  long long arr[n];
  long long digitSum[n]= {0};

  for (int i = 0; i< n; i++) {
    cin >> arr[i];
  }
  for (int i = 0; i< n; i++) {
    digitSum[i] = ( i == 0 ? (didgitSums(arr[i]) == k ? 1 : 0) : digitSum[i-1] + (didgitSums(arr[i]) == k ? 1 : 0) );
  }
  while(t--) {
    cin >> l >> r;
    long long sum = 0;
    sum = digitSum[r-1] - (l > 1 ? digitSum[l-2] : 0);

    cout << sum << endl;
  }
  return 0;
}