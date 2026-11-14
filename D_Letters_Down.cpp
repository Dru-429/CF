#include<iostream>
#include<algorithm>
using namespace std;

int main () {
  int t; 
  cin >> t;

  while (t--) {
    int len; 
    string str;
    cin >> len >> str;
    int arr[len], l = 0, r = len -1, ans =0;

    for (int i = 0; i< len;i++) {
      arr[i] = str[i] - 'a';
    }
    
    bool count[26] = {false};
    while (l < r) {
      int low = min (arr[l], arr[r]);
      int high = max( arr[l], arr[r]);

      for (int i = low; i< high; i++) {
        count[i] = true;
      }
      l++;r--;
    }

    for (int i = 0; i< 26; i++) {
      if(count[i]) {
        ans++;
      }
    }
    
    cout << ans << endl;
  }
  return 0;
}