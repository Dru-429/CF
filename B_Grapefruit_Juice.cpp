#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define int long long

signed main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  while (t--)
  {
    int n, k, p;
    cin >> n >> k >> p;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
      cin >> arr[i];
    sort(arr.begin(), arr.end());

    int total = 0;
    int x = 0;
    while (x < n)
    {
      int sum = 0, count = 0;

      for (int i = 0; i < k && x + i < n; i++)
      {
        sum += arr[x + i];
        count++;
      }

      if (count == k && sum <= p)
        total += p;
      else
        total += sum;

      x += k;
    }

    cout << total << "\n";
  }
  return 0;
}