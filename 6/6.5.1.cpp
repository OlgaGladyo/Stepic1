#include <iostream>
#include <math.h>

using namespace std;

int main()
{
   double p,y,k,x,a;
   int aa,i;
   cout << "Vvedit poch grn, kop, pro, roku = ";
   cin >> x >> y >> p >> k;
   a = (x*100)+y;
   for (i=1; i<=k; i++)
   {
       a = a*(1+(p/100));
       a = trunc(a);

   }
   aa = (int)a;
   x = aa/100;
   y = aa%100;
   cout << x << " grn  " << y << " kop" << endl;
    return 0;
}
