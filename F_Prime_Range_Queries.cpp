#include <iostream>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int limit, t;
  cin >> limit >> t;
  int factors[limit+1]= {0};

  for (int i = 1; i <= limit; i++)
  {
    for (int j = i; j <= limit; j+=i)
    {
      factors[j]++;
    }
  }  

  while (t--)
  {
    int l, r, count = 0;
    cin >> l >> r;

    for (int i = l; i <= r; i++)
    {
      if (factors[i] == 2)
      {
        count++;
      }
    }
    cout << count << "\n";
  }
}