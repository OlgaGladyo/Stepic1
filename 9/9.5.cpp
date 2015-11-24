#include <iostream>
#include <math.h>

using namespace std;

bool tochka (double x, double y, double a, double b, double r)
{
 return (pow (x-a,2)+ pow(y-b, 2) <= pow (r,2));
}

int main()
{
    double a,b,x,y,r;
    cin >> a;
    cin >> b;
    cin >> x;
    cin >> y;
    cin >> r;
if (tochka(x,y,a,b,r)) cout << "Yes";
else cout<< "No";

    return 0;
}
