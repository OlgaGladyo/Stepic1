#include <iostream>
#include <cmath>

using namespace std;

bool tochka(float x, float y)
{
    float a=-1;
    float b=1;
    float r=2;

    return (y >= -x && y >= 2*x-2 && (pow(x-a, 2)+ pow (y-b,2)) <=  r*r  ||
            y <= -x && y <= 2*x-2 && (pow(x-a, 2)+ pow (y-b,2)) >=  r*r );
}

int main()
{
  float a,b;
  cin >> a >> b;

  if (tochka(a,b)) cout << endl << "Yes" << endl;
  else cout << endl << "No" << endl;

    return 0;
}
