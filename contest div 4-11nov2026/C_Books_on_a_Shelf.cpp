#include <iostream>
#include <algorithm>
using namespace std;

int main () {
  int t;
  cin >> t;

  while (t--) {
    int len; 
    cin >> len ;
    int arr[len];

    for (int i = 0; i<len; i++) {
      cin >> arr[i];
    }

    int l = 0, r = len -1, visibility = 1 ; 
    for (int i = 1; i< len; i++) {
      if ((arr[i] > arr[l] || arr[i] > arr[r]) && ((arr[i] != arr[i -1 ]) || (arr[i] != arr[i+1]))) {
        visibility++;
      }
      else {
         
      }
    }

  }
 
  
  
}