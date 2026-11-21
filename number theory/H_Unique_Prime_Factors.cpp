#include <iostream> 
using namespace std;

#define int long long

void solve(int num) {
  int ans = 0;
  for (int i = 2; i*i<=num; i++) {
    if (num%i == 0) {
      ans++;
      while (num % i == 0 ) {
        num /= i;   
      }
    }
  }
  if (num != 1) {
    cout << ans + 1; 
  }
  else{
    cout << ans;
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