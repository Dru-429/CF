#include <iostream>
using namespace std;

int main () {
  int n, t, l,r;
  cin >> n;
  int arr[n];

  for (int i = 0; i< n; i++) {
    cin >> arr[i];
  }

  cin >> t;
  
  while(t--) {
    cin >> l >> r;
    long sum = 0;

    for ( int i = l-1; i<r; i++) {
      if( (i+1) % 2 == 0) {
        sum += arr[i];
      }
    }
    cout << sum << endl ;
  }

}