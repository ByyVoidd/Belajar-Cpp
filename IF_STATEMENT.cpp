#include <iostream>
using namespace std;

int main() {
     int harga_makanan = 50000;
     int uang_jajan;

     cout << "harga makanannya adalah: " << harga_makanan << endl;
     cout << "Berapa uang jajanmu? ";
     cin >> uang_jajan;

     if(uang_jajan >= harga_makanan) {
        cout << "UANGMU CUKUP!" << endl;
     }
     else{
        cout << "MOHON MAAF, UANGMU KURANG....." endl;
     }
// ___________________________________________________________________________________
     int umur;

     cout << "Berapa umurmu? ";
     cin >> umur;

     if( umur > 18) {
        cout << "Kamu sudah legal!";
     }
     else if(umur == 18) {
        cout << "Kamu masih dalam masa peralihan";
     }
     else{
        cout << "Kamu masih belum legal";
     }

    return 0;
}