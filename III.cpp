#include <iostream>
#include <map>
using namespace std;

int main()
{
  int len;
  long long key, ans = 0;
  cin >> len >> key;
  map<long long, long long> m;

  for (int i = 0; i < len; i++)
  {
    long long x;
    cin >> x;

    auto req = m.find(key - x);
    if (req != m.end())
    {
      ans += req->second;
    }
    m[x]++;
  }
  cout << ans << endl;
  return 0;
}