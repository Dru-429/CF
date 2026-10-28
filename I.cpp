#include <iostream> 
#include <set>
using namespace std;

int main () {
  int len, key;
  string ans = "FALSE";
  set<int> s;
  cin >> len >> key;

  for (int i = 0; i< len; i++) {
    int x;
    cin >> x;
    s.insert(x);
  }

  for ( auto i: s) {
    int search = key - i;
    if (s.find(search) != s.end()){
      ans = "TRUE";
    }
  }
  cout << ans << endl;
}