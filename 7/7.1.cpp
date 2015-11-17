#include <iostream>
#include <vector>

using namespace std;

int main()
{
 int n,i;
 cin >> n;

  vector <int> a(n);
  {
      for (i=0; i < n; i++)
        cin >> a[i];
      }
cout << "______" << endl;
for (i= 0 ; i < n; i++)
    if (i%2 == 0) cout << a[i]<< endl;

    return 0;
}
