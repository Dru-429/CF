#include<bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    int n;
    cin >> n;

    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;

    vector<int> primesCnt(n + 1);

    for(int i = 2; i <= n; i++)
    {
        // not a prime number
        if(!isPrime[i]) continue;

        // go to all its multiples and increase their cnt
        for(int j = 2 * i; j <= n; j += i)
        {
            isPrime[j] = false;
            primesCnt[j]++;
        }
    }

    int ans = 0;
    for(int i = 1; i <= n; i++)
    {
        if(primesCnt[i] == 2)
        {
            ans++;
        }
    }

    cout << ans << "\n";
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;

    while(t--)
    {
        solve();
    }
}