#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x = 7.67;
    double y = 8;
    double z;

    z = max(x, y); // 15
    z = min(x, y);   // -1
    z = pow(9, 2);   // 81   
    z = sqrt(9); // 3
    z = abs(-9); // 9
    z = round(x); // 8
    z = ceil(x); // 8
    z = floor(x); // 7

    // MENGHITUNG SISI MIRING PHYTAGORAS

    double a, b;
    int c;

    cout << "Masukkan sisi A: ";
    cin >> a;
    cout << "Masukkan sisi B: ";
    cin >> b;

    a = pow(a, 2); // A pangkat 2
    b = pow(b, 2); // B pangkat 2
    c = sqrt(a + b); // A^2 + B^2

    cout << c;
    
   return 0;
}