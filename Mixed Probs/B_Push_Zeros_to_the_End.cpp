#include <iostream>
using namespace std;

void push(){
  int count = 0, len;
  cin >> len;
  int arr[len];

  for (int i = 0; i<len; i++) {
    cin >> arr[i];
  }

  for (int i = 0; i<len; i++) {
    if (arr[i] != 0) {
      cout << arr[i] << " ";
    }
    else {
      count++ ;
    }
  }

  while(count--) {
    cout << 0 << " ";
  }

  cout << endl;
}


int main() {
  int n; 
  cin >> n;

  while(n) {
    push();
    n--;
  }

  return 0;
}