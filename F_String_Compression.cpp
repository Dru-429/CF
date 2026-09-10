#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        string result = "";
        int n = str.size();
        int i = 0;
        while (i < n) {
            char ch = str[i];
            int count = 0;
            while (i < n && str[i] == ch) {
                count++;
                i++;
            }
            result += ch;
            result += to_string(count);
        }
        cout << result << "\n";
    }
    return 0;
}