#include <iostream>
#include <cmath>

using namespace std;

double p(double a, int n){
	double d = 1;
	
	if(n != 0){
		if (n > 0){
			if(n % 2 == 0){
				d = p(a * a, n / 2);
}	else	{
				d = a * p(a, n - 1);
			}
		}	else {
			d = 1/p(a, -n);
		}
	}	else	{
		d = 1;
	}
	return d;
}
