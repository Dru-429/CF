#include <iostream>
using namespace std;

void secLarge(int arr[], int len) {
  int first, sec = -1;
  first = arr[0];

  for (int i = 0; i<len ; i++) {
    if (arr[i] > first){
      sec = first;
      first = arr[i];
    }
    else if (arr[i] > sec & arr[i] < first) {
      sec = arr[i];
    }
  }
  cout << sec << endl;
}


int main () {
  int len;
  cin >> len;

  int arr[len];
  for (int i =0; i<len; i++) {
    cin >> arr[i];
  }
  secLarge(arr, len);
  return 0;
}