#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout << "enter a = ";
    cin >> a;
    cout << "entwer b = ";
    cin >> b;
    cout << "enter c = ";
    cin >> c;

    if ((a == b) && (a == c) && (b == c)) cout << " 3 ";
      else  if ( (a == b) || (a == c) || (b == c)) cout << " 2 ";
         else cout << " 0 ";
    return 0;
}
