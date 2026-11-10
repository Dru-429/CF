#include <iostream>
#include <map>
using namespace std;

int main()
{
  int len, k, mxlen = 0;
  string str;
  cin >> len >> k >> str;

  map<char, int> cnt;
  int left = 0;

  for (int right = 0; right < len; right++)
  {
    cnt[str[right]]++;

    while ((int)cnt.size() > k)
    { // too many distinct chars
      cnt[str[left]]--;
      if (cnt[str[left]] == 0)
        cnt.erase(str[left]);
      left++;
    }

    mxlen = max(mxlen, right - left + 1);
  }

  cout << mxlen << endl;
  return 0;
}