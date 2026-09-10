#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  while(n--) {
    int len, rotateIndex;
    cin >> len;
    int arr[len];
  
    for (int i=0; i<len; i++){
      cin >> arr[i];
    }
    cin >> rotateIndex;
    
    for (int i=rotateIndex; i <len; i++) {
      cout << arr[i] << " ";
    }
    for (int i=0; i<rotateIndex; i++) {
      cout << arr[i] << " ";
    }
    cout << endl;
  }

  return 0;
}