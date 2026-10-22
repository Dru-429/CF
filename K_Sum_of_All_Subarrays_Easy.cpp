#include <iostream>
using namespace std;

int main () {
  int len ;
  cin >> len;
  long long arr[len], sum = 0;

  for (int i =0; i< len; i++) {
    cin >> arr[i];
    sum += arr[i] * len;
  }

  cout << sum << endl;
}