#include <iostream>
using namespace std;

int main()
{
  long long n;
  cin >> n;
  long long int sum = 0;

  sum = n * (n + 1) / 2;
  cout << sum << endl;

  return 0;
}