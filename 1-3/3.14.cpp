#include <iostream>

using namespace std;

int main()
{
    int n,m,a,c,b,d;
    cout << "Enter n = ";
    cin >> n;

    a = n % 10;
    n = n / 10;
    b = n % 10;
    n = n / 10;
    c = n % 10;
    d = n / 10;

    if (a == d && c == b)
        cout << " 1 ";
    else cout << " 0 ";
    return 0;
}
