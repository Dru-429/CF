#include <iostream>
using namespace std;

const int n = 1e6;
int facotrs[n + 1];

void pre() {
  for (int i = 1; i<=n ; i++) {
    for (int j = i; j<=n; j+=i) {
      facotrs[j]++;
    }
  }
}

int main () {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n, count = 0;
  cin >> n ;

  pre();
  for (int i = 1; i<=n; i++) {
    if ( facotrs[i] == 2) {
      cout << i << " ";
      count++;
    }
  }
  cout << "\n" << count << "\n";
  return 0;
}