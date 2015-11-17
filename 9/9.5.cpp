#include <iostream>
#include <cmath>
using namespace std;
double b(double x1, double y1, double x2, double y2){
	return sqrt(pow(x1-x2, 2) + pow(y1-y2, 2));
}
bool a(double x, double y, double xc, double yc, double r){
	return b(x, y, xc, yc) <= r;
}
int main() {
	double x, y, xc, yc, r;
	cin >> x >> y >> xc >> yc >> r;
	if(a(x, y, xc, yc, r)){
		cout << "YES";
	}	else {
		cout << "NO";
	}
  return 0;
}