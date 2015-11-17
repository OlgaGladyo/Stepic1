#include <iostream>

using namespace std;

int main()
{
  int v, t, l, o;
  cout << "enter v = ";
  cin >> v;
  cout << "enter t = ";
  cin >> t;
  l = v*t;
  o = l % 109;
  cout << "Otmetka = " << o << endl;
    return 0;
}
