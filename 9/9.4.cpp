#include <iostream>
#include <cmath>
using namespace std;
bool a(double x, double y){
	return (abs(x)+abs(y)) <= 1;
}
int main() {
	double x, y;
	cin >> x >> y;
	if(a(x, y)){
		cout << "YES";
	}	else {
		cout << "NO";
	}
  return 0;
}