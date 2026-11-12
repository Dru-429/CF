#include <iostream>
using namespace std;

bool possible(int arr[], int len, long long time, int p){
  int placed = 1;
  long long work = 0;

  for (int i = 0; i<len; i++) {
    if(work + arr[i] <= time ) {
      work += arr[i];
    }
    else {
      placed++;
      if (placed > p)
      {
        break;
      }
      work = arr[i];
    }
  } 
  return placed <= p;
}

int main () {
  int len, s;
  long long ans = 0, l =0, r= 0;
  cin >> len >> s;
  int arr[len];

  for (int i = 0; i<len; i++) {
    cin >> arr[i];
    r += arr[i];
    if ( arr[i] > l) {
      l = arr[i];
    }
  }

  if (len < s) {
    cout << -1 << endl;
    return 0;
  }
  while( l <= r) {
    long long mid = (l+r)/2;

    if(possible(arr, len, mid, s))  {
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