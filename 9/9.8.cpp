#include <iostream>
#include <cmath>
using namespace std;

int divisor(int n)
{
    int i;
    for (i=2; i <= sqrt(n); i++)
    {
        if (n%i == 0) return i;
    }
    return n;
}

int main()
{
    int n;
    cin >> n;
    cout << endl << divisor(n) << endl;
    return 0;
}