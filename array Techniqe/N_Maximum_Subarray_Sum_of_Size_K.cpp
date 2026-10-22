#include <iostream> 
using namespace std;

int main () {
  int len, k;
  cin >> len >> k;
  long long arr[len], prefsum[len] = {0}, max = 0; 

  for (int i = 0; i < len; i++) {
    cin >> arr[i];

    prefsum[i] = (i > 0 ? prefsum[i-1] + arr[i] : arr[i]);
  }

  for (int i =0; i< len; i++) {
    long arrLen = 0;
    for (int j =i; j<len; j++) {
      arrLen++;
      if( arrLen == k) {
        long long sum = prefsum[j] - (i > 0? prefsum[i-1]: 0);
        
        if(sum > max ) {
          max = sum;
        }
      }
    }
  }
  cout << max << endl;

} 