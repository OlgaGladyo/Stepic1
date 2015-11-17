#include <iostream>

using namespace std;

int main()
{
    int a[10][10];
    int i, j;
    int r,s;
    cin >> r;
    cin >> s;

    for (i=0; i<r; i++)
    for (j=0; j<s; j++)
    {
         cout << "a[" << i <<"][" << j << "] = ";
         cin >> a[i][j];
    }
   int mx;
   mx = a[0][0];
   int b,c;
   b=0;
   c=0;
   for (i=0; i<r; i++)
    for (j=0; j<s; j++)
    {
        if (mx< a[i][j])
        {
          mx = a[i][j];
          b=i;
          c=j;
        }
    }
cout << b << "  " << c;
    return 0;
}