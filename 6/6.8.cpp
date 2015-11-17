#include <iostream>
#include <math.h>
using namespace std;

int main()
{

 double x,i,a,s,k, y=1;
 i = 0;
 a = 0;
 cin >> x;
  while (x !=0)
  {
      a += x;
      i++;

  s = a/i;
  k = sqrt((pow(x, y) - (2*x*s) + pow (s, y))) / (n-1);
cin >> x;
  }
// помилка десь є. спитати тата
  cout << k;

  return 0;
}
