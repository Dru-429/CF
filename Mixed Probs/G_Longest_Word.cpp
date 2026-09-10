#include <iostream>
using namespace std;

int main () {
  string str; 
  getline(cin, str);
  long int len= str.length();
  int i = 0;
  int maxCount = 0;

  while( i<len ){
    int currCount = 0;
    while ( i<len && str[i] != ' '){
      currCount++;
      if (currCount > maxCount) {
        maxCount = currCount;
      }
      i++;
    }
    i++;
  }

  cout << maxCount;
  return 0;
}