#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  double x,y,p,k;

  cout << "Vvedit gruvni = ";
  cin >> x;
  cout << "vvedit kop = ";
  cin >> y;
  cout << "Vvedit prochent = ";
  cin >> p;
  cout << "Vvedit roky = ";
  cin >> k;

  double a,b,c;

   a = x*(1+(p/100));
   a = pow (a, k);
   b = y*(1+(p/100));
   b = pow (b, k);

b = trunc(b);
c = c - trunc(c);
b = c+b;

cout << a << b << endl;
    return 0;
}
