#include <iostream>
#include <map> 
using namespace std;

int main() {
  int len, key;
  map<int, int> seen;
  cin >> len >> key; 

  for (int i = 0; i< len; i++){
    int x; 
    cin >> x;

    int search = key -x;
    auto index = seen.find(search);
    if (index != seen.end()){
      cout << index->second <<  " " << i + 1 << endl;
      return 0;
    }
    seen[x] = i + 1;
  }

  cout << -1 << endl;
  return 0;
}