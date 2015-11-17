#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int n,i,c;

cin >> n;
vector <int> a(n);
c = 0;
for (i=0; i<n; i++)
{
    cin >> a[i];
    a[i] = c;
    a[i] = a[i+1];
    a[i+1] = c;

}
cout << a[i] << a[i+1];
    return 0;
}
