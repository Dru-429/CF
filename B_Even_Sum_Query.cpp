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

    for (int i = l - 1; i < r; i++)
    {
      if ((i + 1) % 2 == 0)
      {
        sum += arr[i];
      }
    }
    cout << sum << endl;
  }
}