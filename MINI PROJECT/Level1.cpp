#include <iostream> 
using namespace std;

void challange1() {
    string nama;
    cout << "masukkan nama: " << endl;
    getline(cin, nama);
    cout << "Halo " << nama << "!" << endl;
    cout << "Selamat belajar C++!" << endl;
}

/*____________________________________________________*/

void challange2() {
  float Angka1, Angka2, Penjumlahan, Pengurangan, Perkalian, Pembagian;
  cout << "Masukkan angka pertama: ";
  cin >> Angka1;
  cout << "Masukkan angka kedua: ";
  cin >> Angka2;
  
  // Perhitungan matematika

  Penjumlahan = Angka1 + Angka2;
  Pengurangan = Angka1 - Angka2;
  Perkalian = Angka1 * Angka2;
  Pembagian = Angka1 / Angka2;   
  
  cout << "Hasil Penjumlahan: " << Penjumlahan << endl;
  cout << "Hasil Pengurangan: " << Pengurangan << endl;
  cout << "Hasil Perkalian: " << Perkalian << endl;
  cout << "Hasil Pembagian: " << Pembagian << endl;

}

/*____________________________________________________*/

int LuasPersegiPanjang(int panjang, int lebar) {
  return panjang * lebar;
}

void challange3() {
  cout << "Luas: " << LuasPersegiPanjang(20, 15) << endl;
}

/*____________________________________________________*/

float CelciusToFahrenheit(float celsius) {
  return (celsius * 9.0 / 5.0) + 32.0;
}

void challange4() {
  cout << "Suhu dalam Fahrenheit: " << CelciusToFahrenheit(25.0) << endl;
}


int main() {
    challange1();
    challange2();
    challange3();
    challange4();
    return 0;
}