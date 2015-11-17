#include <iostream>
#include <math.h>
using namespace std;

int main()
{
   double a,b,c,s,p,x;
   cout << "Enter a = ";
   cin >> a;
   cout << "enter b = ";
cin >> b;
cout << "enter c = " ;
cin >> c;

p = (a+b+c)/2;
x = ((p-a)*(p-b)*(p-c));
s = sqrt (x);
cout << "S = " << s ;
    return 0;
}
