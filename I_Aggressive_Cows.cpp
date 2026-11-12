#include <iostream>
#include <algorithm>
using namespace std;

bool possible( long long arr[], int len, int gap, int count) {
  int cowPlaced = 1;
  long long prev = arr[0];

  for (int i = 0; i<len; i++ ) {
    if (arr[i] - prev >= gap) {
      cowPlaced ++;
      prev = arr[i];
    }
  }
  return cowPlaced >= count;
}

int main () {
  int len, cows, ans = 0; 
  cin >> len >> cows ;
  long long arr[len];

  for (int i = 0; i < len ; i++) {
    cin >> arr[i];
  }
  sort(arr, arr + len);

  int l = 0, r = arr[len - 1] - arr[0];
  while (l <= r) {
    int mid = (l+r)/2;

    if (possible(arr,len, mid, cows)) {
      ans = mid;
      l = mid +1 ;
    }
    else {
      r = mid - 1;
    }
  }
  cout << ans << endl;
  return 0;
}