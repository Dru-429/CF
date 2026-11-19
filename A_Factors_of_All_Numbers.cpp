#include <iostream>
#include <vector> 
using namespace std;

void solve(int n) {
  vector <int> factors[n+ 1];

  for( int i=1; i<=n; i++) {
    for (int j=i; j<=n; j += i) {
      factors[j].push_back(i);
    }
  }

  for (int i = 1; i<=n; i++) {
    for (auto k: factors[i]) {
      cout << k << " ";
    }

    cout << endl;
  }

}

int main() {
  int n;
  cin >> n;

  solve(n);
  return 0;
}