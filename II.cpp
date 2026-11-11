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
    int x, ans = -1, l = 0, r = len -1;
    cin >> x;
    
    while (l <= r ) {
      int mid = (l + r)/2;

      if (arr[mid] == x) {
        ans = mid + 1;
        break;
      }
      else if ( arr[mid] > x) {
        l = mid +1;
      }
      else {
        r = mid - 1;
      }
    }
    cout << ans << endl;
  }
}
