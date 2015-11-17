#include <iostream>

using namespace std;

int main()
{
    int i,n;
    cout << "Enter N = ";
    cin >> n;
    i = 2;
    while (n%i != 0)
        i++;

cout << "ND = " << i << endl;

    return 0;
}