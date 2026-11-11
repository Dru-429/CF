#include <iostream> 
using namespace std;

int main () {
  int len, t;
  cin >> len >> t;
  int arr[len];

  for (int i = 0; i<len ; i++) {
    cin >> arr[i];
  }

  while(t--) {
    int x, firstans = -1, lastans = -1;
    cin >> x;
    
    int l = 0, r = len -1;
    while (l <= r ) {
      int mid = (l + r)/2;

      if (arr[mid] == x) {
        firstans = mid + 1;
        r = mid -1 ;
      }
      else if ( arr[mid] < x) {
        l = mid +1;
      }
      else {
        r = mid - 1;
      }
    }

    l = 0, r = len -1;

    while (l <= r ) {
      int mid = (l + r)/2;

      if (arr[mid] == x) {
        lastans = mid + 1;
        l = mid +1 ;
      }
      else if ( arr[mid] < x) {
        l = mid +1;
      }
      else {
        r = mid - 1;
      }
    }

    if( firstans != -1 && lastans != -1) {
      cout << firstans << " " << lastans << endl;
    }
    else {
      cout << -1 << endl;
    }
  }

  return 0;
}
