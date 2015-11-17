#include <iostream>

using namespace std;

int main()
{
 int x,y,m,n;
 cin >> x;
 cin >> y;
 cin >> m;
 cin >> n;

 int p1,p2,p3,p4;
 p1 = x;
 p2 = y;
 p3 = m - y;
 p4 = n - x;

 int s;

 if (p1<p2 && p1<p3 && p1<p4) cout << x;
    else if (p2<p1 && p2<p3 && p2<p4) cout << y;
    else if (p3<p1 && p2>p3 && p3<p4) cout << p3;
 else if (p4<p1 && p2>p4 && p4<p3) cout << p4;

        return 0;
}
