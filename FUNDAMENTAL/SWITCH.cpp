#include <iostream>
using namespace std;

int main() {
    int bulan;
    cout << "Masukkan bulan(1-12): " << endl;
    cin >> bulan;

    switch(bulan) {
        case 1:
            cout << "Ini bulan Januari";
            break;
        case 2:
            cout << "Ini bulan Februari";
            break;
        case 3:
            cout << "Ini bulan Maret";
            break;
        case 4:
            cout << "Ini bulan April";
            break;
        case 5:
            cout << "Ini bulan Mei";
            break;
        case 6:
            cout << "Ini bulan Juni";
            break;
        case 7:
            cout << "Ini bulan Juli";
            break;
        case 8:
            cout << "Ini bulan Agustus";
            break;
        case 9:
            cout << "Ini bulan September";
            break;
        case 10:
            cout << "Ini bulan Oktober";
            break;
        case 11:
            cout << "Ini bulan November";
            break;
        case 12:
            cout << "Ini bulan Desember";
            break;
    }
}