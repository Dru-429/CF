#include <iostream>
using namespace std;

int main () {
  int len ; 
  cin >> len ;
  int arr[len], sum =0;

  for (int i =0; i< len; i++) {
    cin >> arr[i];

    sum += arr[i] * (i + 1) * (len -i);
  }

  cout << sum << endl;

  return 0;
}