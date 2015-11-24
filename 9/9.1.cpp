#include <iostream>

using namespace std;

int min1(int a, int b)
{
    //if (a>b) return b;
    //else return a;

    return a>b ? b:a;
}
 int min4 (int a, int b, int c, int d)
 {
     return min1(min1(a,b), min1(c,d));
 }
int main()
{
int a,b,c,d;

 cin >> a;
 cin >> b;
 cin >> c;
 cin >> d;

 cout << min4(a,b,c,d) << endl;
    return 0;
}
