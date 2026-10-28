#include <iostream>
#include <map>
using namespace std;

int main() {
  int len, key;
  cin >> len >> key;

  map<int, int> seen;   // value -> 1-based index

  for (int i = 1; i <= len; i++) {
    int x;
    cin >> x;

    auto it = seen.find(key - x);
    if (it != seen.end()) {
      cout << it->second << " " << i << "\n";
      return 0;
    }
    seen[x] = i;
  }

  cout << -1 << "\n";
  return 0;
}