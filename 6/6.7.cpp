#include <iostream>
#include <math.h>
using namespace std;

int main()
{

 double x,i,a,p;
 i = 0;
 a = 0;
 cin >> x;
  while (x !=0)
  {
      a += x;
      i++;
cin >> x;
  }
  p = a/i ;
  cout << p;
     return 0;
}
