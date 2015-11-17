#include <iostream>
#include <string.h>
using namespace std;

int main()
{
   string s;
   getline (cin, s);

int k,i;
   k=1;
   for (i=0; s[i] !=0; i++)
   {
       if (s[i] == ' ')
        k ++;
   }
   cout << k;
    return 0;
}
