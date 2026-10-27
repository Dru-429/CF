#include <iostream>
#include <map>
using namespace std;

int main ( ) {
  int len,t;
  cin >> len >> t;
  int arr[len];
  map<int,int> m;

  for (int i = 0; i<len; i++) {
    cin >> arr[i];
    if (m.find(arr[i]) == m.end()) {
      m[arr[i]] = i + 1;
    }
  }

  while( t--) {
    int key; 
    cin >> key;

    auto index = m.find(key);
    cout << ( index == m.end() ? -1 : index->second ) << endl;
  }
}
