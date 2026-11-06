#include <iostream> 
#include <map>
using namespace std;

int main () {
  int len,ans = 0;
  long long key;
  cin >> len >> key;
  map <int, int> m;

  for (int i = 0; i< len; i++) {
    int x;
    cin >> x;

    long long search = key - x;
    auto req = m.find(search);

    if(req != m.end()) {
      ans += req-> second;
    }
    if(m.find(x) == m.end()) {
      m[x] = 1;
    }
    else {
      m[x]++;
    }
  }
  cout << ans << endl;
  return 0;
}