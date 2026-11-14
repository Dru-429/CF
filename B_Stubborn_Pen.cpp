#include <iostream>
#include <algorithm>
using namespace std;

int main () {
  int t ;
  cin >> t;

  while (t--) {
    int len, count = 0 ;
    cin >> len;
    string str;
    cin >> str;
    
    if ( str[0] == 'B' ) {
      count ++;
    }
    for (int i = 1; i <= len; i++ ) {

      if( i != 0) {
        if(str[i] == str[i-1]  ) {
          count++;
        }
      }
    }
    cout << count << endl;
  }

  return 0;
}