#include <iostream>
#include <math.h>
using namespace std;

int main()
{
     double n,x;
 cout << "Enter x = ";
 cin >> x;

 n = trunc(x);
 x = (x-n)*10;
 n = trunc (x);
 cout << n;

    return 0;
}
