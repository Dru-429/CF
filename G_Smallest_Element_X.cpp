#include <iostream>
#include <algorithm>
using namespace std;

int main () {
  int len , t;
  cin >> len >> t;
  int arr[len] ;

  for (int i = 0; i<len; i++) {
    cin >> arr[i];
  }
  sort(arr, arr+len);

  while (t--) {
    int x, ans = len;
    cin >> x; 

    int l= 0, r = len -1; 
    while (l <= r) {
      int mid = (l + r)/2;
      if (arr[mid] >= x) {
        ans = mid;
        r = mid -1 ;
      }
      else {
        l = mid +1;
      }
    }

    if (ans == len) {
      cout << -1 << endl;
    }
    else{
      cout << arr[ans] << endl;
    } 
  }

  return 0;
}