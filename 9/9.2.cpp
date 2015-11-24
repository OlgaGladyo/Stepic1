#include <iostream>
#include <math.h>

using namespace std;

double distance(double x1, double x2, double y1, double y2)
{
    double d;
    d = sqrt(pow((x2-x1),2)+ pow ((y2-y1),2));
    return d;
}

int main()
{
    double x1,x2,y1,y2;
cin >> x1;
cin >> x2;
cin >> y1;
cin >> y2;

cout << distance(x1,x2,y1,y2) << endl;
    return 0;
}
