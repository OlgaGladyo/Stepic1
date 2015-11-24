#include <iostream>

using namespace std;

bool tochka (double x, double y)
{
return (y<=x+1 && y>= x-1 && y<= 1-x && y>=-x-1);
}

int main()
{
    double x,y;
    cin >> x;
    cin >> y;
if (tochka(x,y)) cout << "Yes";
else cout<< "No";

    return 0;
}

}
