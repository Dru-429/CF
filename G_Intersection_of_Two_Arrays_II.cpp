#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int len, len1;
  map<int, int> m1, m2;
  vector<int> v = {0};

  cin >> len;
  for (int i = 0; i < len; i++)
  {
    int x;
    cin >> x;
    m1[x]++;
  }

  cin >> len1;
  for (int i = 0; i < len1; i++)
  {
    int x;
    cin >> x;
    m2[x]++;
  }

  v.clear();
  for (auto &i: m1) {
    auto mb = m2.find(i.first); 
    int mincount = 0;
    if( mb != m2.end()) {
      mincount = min(i.second, mb->second);
    }

    for ( int j = 0; j<mincount; j++ ) {
      v.push_back(i.first);
    }
  }
  sort(v.begin(), v.end());

  cout << v.size() << endl;
  for( auto i: v) {
    cout << i << " ";
  }
  cout << endl;
} 