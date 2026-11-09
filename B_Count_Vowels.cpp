#include <iostream>
#include <string>
using namespace std;

int main()
{
  int count = 0, len, k;
  string str;
  cin >> len >> k;
  cin >> str;

  for (int i = 0; i < k; i++)
  {
    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
    {
      count++;
    }
  }
  cout << count << " ";

  for (int i = k; i<len; i++) {
    if( count > 0 && (str[i - k] == 'a' || str[i - k] == 'e' || str[i - k] == 'i' || str[i - k] == 'o' || str[i - k] == 'u' || str[i - k] == 'A' || str[i - k] == 'E' || str[i - k] == 'I' || str[i - k] == 'O' || str[i - k] == 'U') ) {
      count--;
    }
       if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
    {
      count++;
    }
    cout << count << " ";
  }
  cout << endl;

  return 0;
}