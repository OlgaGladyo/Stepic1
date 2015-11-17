#include <iostream>

using namespace std;

int main()
{
int h,m,s, p,n;
cout << "enter N = ";
cin >> n;
 s = n % 60;
 p = n / 60;
 m = p % 60;
 h = p / 60;
 cout << "h:m:s   " << h << "  " << m << " "<< s << endl;


    return 0;
}