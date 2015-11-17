#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    char c;
    cin >> s;
    c = s[0];
    if ((c >= '0') && (c <= '9')) cout << "yes" << endl;
    else cout << "no" << endl;
    return 0;
}
