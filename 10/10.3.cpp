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
 else if (c>= 'A' && c <= 'Z') {
    int temp2 = c - 'A';
    c = 'a' + temp2;
    cout << c;
 }
 else cout << c;
    return 0;
}
