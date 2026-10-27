#include <iostream> 
#include <set>
using namespace std;

int main () {
  int len;
  cin >> len;
  int arr[len];
  set<int> s;

  for (int i =0; i < len; i++) {
    cin >> arr[i];
    s.insert(arr[i]);
  }
  
  cout << s.size() << endl;
  return 0;
}
