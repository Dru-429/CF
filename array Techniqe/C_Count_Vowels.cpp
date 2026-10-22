#include <iostream>
using namespace std;

int main() {
  int len, n ;
  cin >> len;
  int prefSum[len] = {0};

  string str, vovles= "aeiouAEIOU";
  cin >> str;

  for (int i = 0; i< len; i++) {
   char curr = str[i];
   
    if( vovles.find(curr) != string::npos){
      prefSum[i] = ( i == 0 ? 1: prefSum[i-1] + 1);
    }
    else{
      prefSum[i] = ( i == 0 ? 0: prefSum[i-1]);
    }
  }

  cin >> n;
  while( n--) {
    int l, r;
    cin >> l >> r;
    l--;r--; 
    int count = 0;
    count = prefSum[r] - (l > 0 ? prefSum[l-1] : 0); 
    cout << count << endl;
  }
  
  return 0;
}