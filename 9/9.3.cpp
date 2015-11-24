#include <iostream>

using namespace std;

bool tochka (double x, double y)
{
    /*if (x>=-1 && x<=1 && y>=-1 && y<=1) return true;
    else return false;*/
        return (x>=-1 && x<=1 && y>=-1 && y<=1);
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
