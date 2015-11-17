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
int k;
k = 0;
for (i= 0 ; i < n; i++)
    if (a[i] > 0) k++;

        cout << k << endl;

    return 0;
}
