#include <iostream>

using namespace std;

int main()
{
   int a,b,i,im;
   cin >> a;

i = 1;
im = 1;
   while (a !=0)
   {
       b = a;
       cin >> a;
       if (a==b)
       {
           i++;
           if (i>im)
               im = i;
       }
else i = 1;
   }
   cout << im << endl;

       return 0;
}
