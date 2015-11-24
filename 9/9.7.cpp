#include <iostream>
#include <cmath>

using namespace std;

double p(double a, int n){
	double d = 1;
	if(n != 0){
		if (n > 0){
			for(int i = 0; i < n; i++){
	d *= a;
			}
		}else {
	d = 1/p(a, -n);
		}
	}	else	{
		d = 1;
	}
	return d;
}

int main(){
	double a;
	int n;
	cin >> a >> n;
	cout << p(a, n);
	return 0;
}