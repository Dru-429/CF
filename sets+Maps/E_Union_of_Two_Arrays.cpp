#include <iostream>
#include <set>
using namespace std;

int main () {
  set <int> s;
  int t = 2; 

  while ( t--)
  {
    int len; 
    cin >> len;
    int arr[len];
    
    for (int i = 0; i< len; i++) {
      cin >> arr[i];
      s.insert(arr[i]);
    }
  }
  cout << s.size() << endl; 
  for (auto i : s) {
    cout << i << " " ;
  }
  cout << endl;

}