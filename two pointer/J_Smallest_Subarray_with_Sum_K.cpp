#include <iostream>
#include <climits>
using namespace std;

int main()
{
  int len, l = 0, minLen = INT_MAX;
  long long sum = 0, k;
  cin >> len >> k;
  long long arr[len];

  for (int i = 0; i < len; i++)
  {
    cin >> arr[i];
    sum += arr[i];

    while (sum >  k)
    {
      minLen = min(minLen, i - l + 1);
      sum -= arr[l];
      l++;
    }
  }
  if (minLen == INT_MAX)
    cout << -1 << endl;
  else
    cout << minLen << endl;
  return 0;
}