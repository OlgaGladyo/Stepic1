#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,x,y,z,k,m, p, o, h, q;
    cout << "enter 1 = " << endl;
    cout << "enter 2 = " << endl;
    cout << "enter 3 = " << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    // 1 class
    x = a / 2;
    y = a % 2;
    o = x + y;
    // 2 class
    q = b / 2;
    d = b % 2;
    p = q + d;
    // 3 class
    z = c / 2;
    k = c % 2;
    h = z + k;
    // together
    m = p + o + h;
    cout << "Desks = " << m << endl;
    return 0;
}
