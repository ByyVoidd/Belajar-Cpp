#include <iostream>
#include <cmath>
using namespace std;

int main() {
    /*KEPALA PROGRAM*/

    cout << "==============================" << endl;

    /*INPUT ANGKA & METODE*/
    double angka_1, angka_2, hasil;
    char metode;

    cout << "masukkan angka pertama = ";
    cin >> angka_1;
    cout << "masukkan angka kedua = ";  
    cin >> angka_2;
    cout << "masukkan metode penghitungan (+, -, *, /) = ";
    cin >> metode;

    cout << "==============================" << endl;
    cout << "hasil dari " << angka_1 << " " << metode << " " << angka_2 << " = ";

    /*PROSES OPERASI*/
    switch (metode) {
        case '+':
            hasil = angka_1 + angka_2;
            cout << hasil << endl;
            break;
        case '-':
            hasil = angka_1 - angka_2;
            cout << hasil << endl;
            break;
        case '*':
            hasil = angka_1 * angka_2;
            cout << hasil << endl;
            break;
        case '/':
            hasil = angka_1 / angka_2;
            cout << hasil << endl;
            break;
        default:
            cout << "metode tidak valid" << endl;

    }

    /*PERTANYAAN ULANG*/
    cout << "apakah anda ingin mengulang program? (y/n) = ";
    char ulang;
    cin >> ulang;
    if (ulang == 'y' || ulang == 'Y') {
        main();
    } else {
        cout << "terima kasih telah menggunakan program ini" << endl;
    }

    return 0;

}