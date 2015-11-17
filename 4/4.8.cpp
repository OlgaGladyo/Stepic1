#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x1,x2,y1,y2;
   cout << "X1 = ";
   cin >> x1;
   cout << "Y1= ";
   cin >> y1;
   cout << "X2 = ";
   cin >> x2;
   cout << "Y2= ";
   cin >> y2;

   if  (fabs(x1-x2) == fabs(y1-y2)) cout << "Yes";
   else cout << "No";

    return 0;
}
