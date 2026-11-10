#include <iostream>
#include <string>
using namespace std;

int main () {
  int len, mxlen = 0;
  string str, mxstr = "";
  cin >> len >> str;

  for (int i = 0; i< len ; i++) {
    auto pos = mxstr.find(str[i]);

    if ( pos != string::npos)  {
       mxstr.erase(0, pos+1);
    }
    mxstr.push_back(str[i]);
    mxlen = max(mxlen, (int)mxstr.length() );
  }
  cout << mxlen << endl;
  return 0;
}