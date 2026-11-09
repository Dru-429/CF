#include <iostream> 
using namespace std;

int main () {
  int len,mxlen = 0, l = 0;
  long long k, sum =0;
  cin >> len >> k;
  long long arr[len];

  for (int i = 0; i< len; i++) {
    cin >> arr[i];
    sum += arr[i];

    while( sum >= k) {
      sum -= arr[l];
      l++;
    }
    mxlen = max(mxlen, i-l+1);
  }

  cout << mxlen << endl;
  return 0;
}