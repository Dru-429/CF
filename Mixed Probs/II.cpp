#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
  vector<int> num;
  long long sum =0;
  string str;
  cin >> str;

  for( auto c: str) {
    num.push_back(c - '0');
  }

  for (auto i: num) {
    sum += i;
  }

  cout << sum << endl;
  return 0;
}