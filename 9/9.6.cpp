#include <iostream>
#include <cmath>

using namespace std;

bool kolo(int x, int y){
    return sqrt(pow(x + 1, 2) + pow(y - 1, 2)) < 2;
}

bool kolo1(int x, int y){
    return sqrt(pow(x + 1, 2) + pow(y - 1, 2)) == 2;
}

bool t1(int x, int y){
    return y >= -x && y >= 2 * x + 2;
}

bool t2(int x, int y){
    return y <= -x && y <= 2 * x + 2;
}

bool ar(int x, int y){
    return (kolo1(x, y) && (kolo(x, y) || kolo1(x, y))) ||
        (t1(x, y) && (!t1(x, y) || t2(x, y)));
}

int main(){
    int x, y;
    cin >> x >> y;
    if(a(x, y) == true){
        cout << "YES";
    }   else    {
        cout << "NO";
    }
    return 0;
}
