#include <iostream>

using namespace std;

int main()
{
     int a,i,b;
    i = 0;
b = 0;
   do {cout << "Enter a = ";
   cin >> a;
   if (a>0) {i++;
   b += a;    } }
    while (a>0) ;

 cout << "I = " << i << endl;
 cout << " S = " << b << endl;
    return 0;
}
