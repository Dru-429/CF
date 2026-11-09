#include <iostream> 
#include <set>
using namespace std;

int main () {
  int len, goodLen, k, count = 0;
  cin >> len >> goodLen >> k;
  int arr[len];
  set <int> good;

  for (int i = 0; i <len; i++) {
    cin >> arr[i];
  }

  for (int i = 0; i < goodLen; i++) {
    int x;
    cin >> x;
    good.insert(x);
  }

  for (int i = 0; i< k; i++) {
    if (good.find(arr[i]) != good.end() ) {
      count ++;
    }
  }
  cout << count << " ";

  for (int i = k; i<len; i++) {
    if (count > 0 && good.find(arr[i-k]) != good.end()) {
     count --;
    }
    if( good.find(arr[i]) != good.end()) {
      count ++;
    }

    cout << count << " ";
  }

  cout << endl;
  return 0;
}