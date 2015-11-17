#include <iostream>

using namespace std;

int main()
{
  string s;
  getline(cin,s);

  int p,i;
  p = s.length();

   for (i=0; i< p/2; i++)
   {
       if (s[i] != s[p-i-1])
       {cout << "NO ";
       break;}
   }
   cout << "palindrom";
    return 0;
}
