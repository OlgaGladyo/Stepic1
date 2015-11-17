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

for (i=0; i<n; i++)
if (a[i] % 2 == 1) break;

int x;
x = a[i];
int k;
k = i;

for (i= k + 1 ; i < n; i++)
    if (a[i] % 2 == 1 && a[i] < x)
x = a[i];

cout << x;

    return 0;
}