#include <iostream>

using namespace std;

int main()
{
 string s;
 char c;
 cin >> s;
 c = s[0];

 if (c>= 'a' && c <= 'z') {
    int temp = c -'a';
    c = 'A' + temp;
    cout << c;
 }
    return 0;
}
