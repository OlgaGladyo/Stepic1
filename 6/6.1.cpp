#include <iostream>

using namespace std;

int main()
{
    double a,b,c,d,e,f,x,y;
    cout << "Enter koef = " << endl;
    cin >> a >> b >> c >> d >> e >> f;

    y = (c*e - f*a)/ (b*c - d*a);
    x = (d*e - f*b)/ (d*a - b*c);

    cout << "X =  " << x << " Y =  " << y;
    return 0;
}
