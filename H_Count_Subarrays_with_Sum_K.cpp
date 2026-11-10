#include <iostream> 
using namespace std;

int main () {
  int len;
  long long count = 0, l = 0; 
  long long k, sum =0;
  cin >> len >> k;
  long long arr[len];

  for (int i = 0; i<len ; i++) {
    cin >> arr[i];
    sum += arr[i];

    while (sum >= k && l <= i) {
      sum -= arr[l];
      l++;
    }
    count += i-l +1;
  }
  cout << count << endl;
  return 0;
}