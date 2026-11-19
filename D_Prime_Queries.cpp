#include <iostream>
using namespace std;

const int n = 1e6;
int factors[n + 1];

void pre() {
  for (int i = 1; i<=n ; i++) {
    for (int j = i; j<=n; j+=i) {
      factors[j]++;
    }
  }
}

int main () {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  pre();

  while(t--) {
    int x;
    cin >> x;
    if(factors[x] == 2) {
      cout << "YES" << "\n";
    }
    else {
      cout << "NO" << "\n"; 
    }   
  }
}