#include <iostream> 
#include <map>
#include <set>
using namespace std;

int main () {
  int t= 2;
  map<int, int> m;
  set<int> s;

  while(t--) {
    int len;
    cin >> len;
    set <int> seen;

    for (int i = 0; i< len; i++) {
      int num;
      cin >> num;
      if(seen.count(num) == 0 ){
        seen.insert(num);
        m[num]++;
      }
    }
  }

  for (auto i: m) {
    if(i.second == 2) {
      s.insert(i.first);
    }
  }

  cout << s.size() << endl;
  for (auto i: s) {
    cout << i << " ";
  }
  cout << endl;
}