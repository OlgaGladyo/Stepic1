#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[100][100];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
		}
	}
	int b = 0;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			if (a[i][j] != a[j][i]){
				b++;
				break;
			}
		}
		if(b != 0){
			break;
		}
	}
	
	// output
	
	if(b == 0){
		cout << "YES";
	} else {
		cout << "NO";
	}
	
	
  return 0;
}