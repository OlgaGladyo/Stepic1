#include <iostream>
#include <cmath>
using namespace std;
bool a(double x, double y){
	return (x >= -1 && x <= 1 && y >= -1 && y <= 1);


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