#include <iostream> 
using namespace std;

#define int long long

void solve(int num) {

  for (int i = 2; i*i<=num; i++) {
    if (num%i == 0) {
      int count = 0; 
      
      while (num % i == 0 ) {
        count++ ;
        num /= i;   
      }

      if (count > 0) cout << i << "^" << count << " ";
    }
  }
  if (num != 1) {
    cout << num << "^" << 1 << "\n";
  }
}

signed main () {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int num;
  cin >> num ;
  
  solve(num);

  return 0;
}