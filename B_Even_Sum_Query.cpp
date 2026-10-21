#include <iostream>
using namespace std;

int main()
{
  int n, t, l, r;
  cin >> n;
  long long arr[n], prefSum[n];

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  for (int i = 0; i < n; i++)
  {
    if ((i + 1) % 2 == 0)
    {
      prefSum[i] = arr[i] + (i > 0 ? prefSum[i - 1] : 0);
    }
    else
    {
      prefSum[i] = (i > 0 ? prefSum[i - 1] : 0);
    }
  }

  cin >> t;

  while (t--)
  {
    cin >> l >> r;
    long sum = 0;
    sum = prefSum[r - 1] - (l > 1 ? prefSum[l - 2] : 0);
    cout << sum << endl;
  }
}