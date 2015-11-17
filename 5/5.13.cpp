#include <iostream>

using namespace std;

int main()
{
   int a,b,c,i;
   cin >> a;
   cin >> b;
 cin >> c;
 i = 0;
   while (c !=0)
   {
       if ((b>c) && (b>a))
        i++;

       a=b;
       b=c;

      cin >> c;
   }
  cout << i;

       return 0;
}
