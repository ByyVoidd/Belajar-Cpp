<<<<<<< HEAD
#include <iostream>
#include <string>
using namespace std;
int TambahkanAngka(int x, int y) {
    return x + y;
}

int main(int argc, char** argv) {
   int angkapertama {3};
   int angkakedua {7};

   cout << "Masukkan angka pertama:" << angkapertama << endl; //3
   cout << "Masukkan angka kedua:" << angkakedua << endl; //7

   int sum = angkapertama + angkakedua;
   cout << "Jumlah: " << sum << endl; //10

   sum = TambahkanAngka(78, 45);
   cout << "Jumlah: " << sum << endl; //123

   sum = TambahkanAngka(67, 67);
   cout << "Jumlah: " << sum << endl; //134

   cout << "Jumlah: " << TambahkanAngka(34, 56) << endl; //90
 /*___________________________________________________________________*/
   int umur;
   string nama;

    cout << "Masukkan umur  dan nama anda: " << endl;
    cin >> umur >> nama;

    cout << "hallo " << nama << ", umur anda adalah " << umur << endl;

    int usia;
    string namalengkap;
    cout << "Masukkan nama lengkap anda: " << endl;
    getline(cin, namalengkap);

    cout << "Masukkan usia anda: " << endl;
    cin >> usia;

    cout << "Halo " << namalengkap << ", usia anda adalah " << usia << endl;
    return 0;
}

=======
#include <iostream>
#include <string>
using namespace std;
int TambahkanAngka(int x, int y) {
    return x + y;
}

int main(int argc, char** argv) {
   int angkapertama {3};
   int angkakedua {7};

   cout << "Masukkan angka pertama:" << angkapertama << endl; //3
   cout << "Masukkan angka kedua:" << angkakedua << endl; //7

   int sum = angkapertama + angkakedua;
   cout << "Jumlah: " << sum << endl; //10

   sum = TambahkanAngka(78, 45);
   cout << "Jumlah: " << sum << endl; //123

   sum = TambahkanAngka(67, 67);
   cout << "Jumlah: " << sum << endl; //134

   cout << "Jumlah: " << TambahkanAngka(34, 56) << endl; //90
 /*___________________________________________________________________*/
   int umur;
   string nama;

    cout << "Masukkan umur  dan nama anda: " << endl;
    cin >> umur >> nama;

    cout << "hallo " << nama << ", umur anda adalah " << umur << endl;

    int usia;
    string namalengkap;
    cout << "Masukkan nama lengkap anda: " << endl;
    getline(cin, namalengkap);

    cout << "Masukkan usia anda: " << endl;
    cin >> usia;

    cout << "Halo " << namalengkap << ", usia anda adalah " << usia << endl;
    return 0;
}

>>>>>>> 889629909058b0f465c5ce9a878586fba31b6ca2
