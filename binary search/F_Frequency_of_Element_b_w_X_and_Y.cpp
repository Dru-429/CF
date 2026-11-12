#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int len, t;
  cin >> len >> t;
  int arr[len];

  for (int i = 0; i < len; i++)
  {
    cin >> arr[i];
  }
  sort(arr, arr + len);

  while (t--)
  {
    int x, y;
    cin >> x >> y;

    int lindex = len, rindex = -1;

    // first index with arr[i] >= x
    int l = 0, r = len - 1;
    while (l <= r)
    {
      int mid = l + (r - l) / 2;
      if (arr[mid] >= x)
      {
        lindex = mid; 
        r = mid - 1;
      }
      else
      {
        l = mid + 1;
      }
    }

    // last index with arr[i] <= y
    l = 0, r = len - 1;
    while (l <= r)
    {
      int mid = l + (r - l) / 2;
      if (arr[mid] <= y)
      {
        rindex = mid; 
        l = mid + 1;
      }
      else
      {
        r = mid - 1;
      }
    }

    if (y < x || lindex > rindex)
      cout << 0 << "\n";
    else
      cout << rindex - lindex + 1 << "\n";
  }

  return 0;
}