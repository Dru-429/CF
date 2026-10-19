#include <iostream> 
using namespace std;

int main () {
  int t ;
  cin >> t;

  while (t--) {
    long long l, r, i =0;
    int c;
    cin >> c >> l >> r;

    if ( l > r)
    {
      cout << 0;
      return 0;
    }
    

    if (c == 1){
      i = r-l -1;
    }
    else if (c == 4) {
      i = r-l +1;
    }
    else {
      i = r-l;
    }

    cout << i << endl;
  }
  
  return 0;
}