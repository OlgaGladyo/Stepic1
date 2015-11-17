#include <iostream>

using namespace std;

int main()
{
    int n,m,k;
    cout << "N ";
    cin  >> n;
    cout << "M ";
    cin >> m;
    cout <<"K ";
    cin >> k;

    if (k<= m*n)
    {
        if ((k%n == 0) || (k%m == 0))
            cout << "Yes";
        else cout << "No";
    }
    else cout << "Error";

        return 0;
}
