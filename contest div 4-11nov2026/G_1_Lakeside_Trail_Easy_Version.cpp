#include <iostream>
#include <algorithm>
using namespace std;
 
bool possible(int arr[], int len, long long s, int k){

  int after[len];
  int placed = 1;
  long long work = 0;

  for (int i = 0; i< len; i++) {
    after[i] == arr[i];
  }

  for (int i = 0; i<len; i++) {
    if(work + arr[i] <= s ) {
      work += arr[i];
    }
    else {
      placed++;
      if (placed > k)
      {
        break;
      }
      work = arr[i];
    }
  } 
  return placed <= p;
}

int main () {
  int len,k;
  long long ans = 0;
  cin >> len >> k;
  int arr[len];

  for (int i = 0; i< len; i ++) {
    cin >> arr[i]; 
  }

  int l = 0, r = max_element(arr, arr+len) - min_element(arr, arr + len);
  while( l < r) {
    long long mid = (l+r)/2;

    if(possible(arr, len, mid, k))  {
      ans = mid;
      r = mid - 1;
    }
    else{
      l = mid + 1;
    }
  }
  cout << ans << endl;
  return 0;
}