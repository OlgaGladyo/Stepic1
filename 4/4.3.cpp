#include <iostream>

using namespace std;

int main()
{
  int a, b, c;
  cout << "enter a = ";
  cin >> a;
  cout << "entwr b = ";
  cin >> b;
  cout << "enter c = ";
  cin >> c;

  if (( a > b) && (a > c ))
 cout << " ++ = "<< a;
 else { if ( (b > c) && (b > a)) cout << " ++ = " << b;
             else { if ((c > a) && (c > b)) cout << "  ++ = " << c;
                     else cout << "Error = ";

             }

 }

     return 0;
}
