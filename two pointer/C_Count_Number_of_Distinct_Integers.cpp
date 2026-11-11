#include <iostream>
#include <map>
using namespace std;

int main () {
  int n, k;
  cin >> n >> k;
  int arr[n];
  map < int , int > m;

  for (int i  = 0; i<k; i++) {
    int x;
    cin >> x;
    arr[i] = x;
    m[arr[i]] ++ ;
  }
  cout << m.size() << " " ;

  for (int i = k; i<n; i++) {
    int x;
    cin >> x;
    arr[i] = x;
    m[arr[i-k]] --;
    m[arr[i]] ++ ;
    
    if (m[arr[i-k]] == 0) {
      m.erase(arr[i-k]);
    }
    cout << m.size() << " ";
  }
  cout << endl;
  return 0;
}