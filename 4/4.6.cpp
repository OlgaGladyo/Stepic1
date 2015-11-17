#include <iostream>

using namespace std;

int main()
{
    int  v1, v2, g1, g2;
    cout << "Vvedit vertukal 1 = ";
    cin >> v1;
    if (v1 > 8 || v1 <= 0 ) cout << "YOU ARE IDIOT!!!"<< endl ;
    cout << "Vvedit goruzontal 1 = ";
    cin >> g1;
    if (g1 > 8 || g1 <= 0 ) cout << "YOU ARE IDIOT!!!" << endl;
    cout << "Vvedit vertukal 2 = ";
    cin >> v2;
    if (v2 > 8 || v2 <= 0 ) cout << "YOU ARE IDIOT!!!" << endl;
    cout << "Vvedit goruzontal 2 = ";
    cin >> g2;
    if (g2 > 8 || g2 <= 0 ) cout << "YOU ARE IDIOT!!!" << endl;

    if ( v1 == v2 && g1 != g2) cout << "Yes";
     else if (g1 == g2 && v1 != v2) cout << "Yes";
       else cout << "No";
    return 0;
}
