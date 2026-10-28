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

    int search = key - x;
    if (s.find(search) != s.end()){
      ans = "TRUE";
    }
    else{
      s.insert(x);
    }
  }
  cout << ans << endl;
}