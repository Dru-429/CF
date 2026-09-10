#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  while(n--) {
    int len;
    cin >> len;
    int arr[len];
  
    for (int i=0; i<len; i++){
      cin >> arr[i];
    }
  
    int smallest= arr[0],sIndex = 0;
  
    for (int i=0;i <len; i++) {
      if (arr[i] < smallest) {
        smallest = arr[i];
        sIndex = i;
      }
    }
    cout << sIndex << endl;
  }

  return 0;
}