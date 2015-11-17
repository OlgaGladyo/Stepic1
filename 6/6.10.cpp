#include <iostream>
#include <math.h>

using namespace std;

int main()
{
   double a,b,c,x1,x2,dd,d,x;
   cout << "Vvedit koef = " << endl;
   cin >> a >> b >> c;

   if (a == 0)
   {
       if ((b!= 0 ) && (c!=0))
       {
           x = -c/b;
           cout << "1: " << "x = " << x << endl;
       }
       else if ((b==0) && (c != 0)) cout << "0 " << "Nemaye koreniv " << endl;
       else if ((b !=0) && (c == 0)) cout << "1:  " << "0" << endl;
       else if ((b==0) && (c==0)) cout << "3 " << "Bezkinechno" << endl;
   }

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
           if (x1 > x2) cout << "2: " << "x1 = " << x1 << "   x2 =  " << x2;
           else cout << "2: " << "x1 = " << x2 << "  x2 =  " << x1;
       }
       else
       {
           x = (-b + d) / (2*a);
           cout << "1: " << "x = " << x;
       }
       }

   }