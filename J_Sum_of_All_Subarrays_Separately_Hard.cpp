#include <iostream>
using namespace std;

int main () {
  int n;
  cin >> n;
  int arr[n], prefsum[n] = {0};

  for (int i =0; i< n; i++) {
    cin >> arr[i];
    prefsum[i] = (i == 0 ? arr[i] : prefsum[i-1] + arr[i]);
  }

  for (int i =0; i< n; i++) {
    for (int j =i; j<n; j++) {
      long long sum = prefsum[j] - (i > 0? prefsum[i-1]: 0);
      cout << sum << endl;
    }
  }

} 