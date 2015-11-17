#include <iostream>
#include <math.h>

using namespace std;

int main()
{
   double a,b,c,x1,x2,dd,d,x;
   cout << "Vvedit koef = " << endl;
   cin >> a >> b >> c;

   if (a == 0) cout << "Error";
   else
   {
       dd = b*b - 4*a*c;
       if (dd < 0) cout << "Rivnannya koreniv ne maye";
       else
       {
       d = sqrt(dd);

       if (dd > 0)
       {
           x1 = (-b + d)/(2*a);
           x2 = (-b - d)/(2*a);
           if (x1 > x2) cout << x1 << "  " << x2;
           else cout << x2 << "   " << x1;
       }
       else
       {
           x = (-b + d) / (2*a);
           cout << x;
       }
       }

   }
    return 0;
}
