#include <iostream>

using namespace std;

int main()
{
int h, n, a, b;
cout << "Enter h = ";
cin >> h;
cout << "Enter a = ";
cin >> a;
cout << "Enter b = ";
cin >> b;

if (b >= a) cout << " Error ";
else
{n = (h-a)/ (a-b) + 1;

cout << "A number of day = " << n << endl; }
    return 0;
}
