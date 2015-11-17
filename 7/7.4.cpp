#include <iostream>
#include <vector>

using namespace std;

int main()
{
 int n,i;
 cin >> n;

  vector <int> a(n);

      for (i=0; i < n; i++)
        cin >> a[i];

cout << "______" << endl;

for (i= 1 ; i < n; i++)
    if (a[i] > a[i-1]) cout << a[i] << endl;

    return 0;
}
