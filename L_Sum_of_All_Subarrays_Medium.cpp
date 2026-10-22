#include <iostream>
using namespace std;

int main () {
  int len ;
  cin >> len;
  long long arr[len], sum =0;

  for (int i = 0; i< len; i++) {
    cin >> arr[i];

    sum += arr[i] * (i+1) * (len-i);
    // sum += arr[i] * (starting point of the subarray) * (ending point of the subarray) that includes this num 
  }
  cout << sum << endl;
  return 0;
}