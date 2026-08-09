#include <iostream> 
using namespace std;

void challenge5() {
  // Input bilangan
  int bilangan;
  cout << "Masukkan bilangan: ";
  cin >> bilangan;

  // Cek bilangan ganjil atau genap
  if (bilangan % 2 == 0) {
    cout << bilangan << " adalah bilangan genap." << endl;
  }
  else {
    cout << bilangan << " adalah bilangan ganjil." << endl;
  }
}

/*_____________________________________________________*/

void challenge6() {
  // Login sederhana
  string username;
  string password;
  cout << "Masukkan username: ";
  cin >> username;
  cout << "Masukkan password: ";
  cin >> password;

  // Cek login
  if (username == "admin123" && password == "123456") {
    cout << "Login berhasil." << endl;
  }
  else {
    cout << "Username atau password salah." << endl;
  }
}

/*_____________________________________________________*/

void challenge7() {
  // Input nilai
  int nilai;
  cout << "Masukkan nilai: ";
  cin >> nilai;

  // Cek nilai
  if (nilai >= 90) {
    cout << "Nilai A." << endl;}
  else if (nilai >= 80) {
    cout << "Nilai B." << endl;}
  else if (nilai >= 70) {
    cout << "Nilai C." << endl;}
  else if (nilai >= 60) {
    cout << "Nilai D." << endl;}
  else {
    cout << "Nilai E." << endl;}
}

/*_____________________________________________________*/

void challenge8() {
  for (int i = 1; i <= 100; i++) {
    cout << i << " ";
  }

  int i = 1;
  while (i <= 100) {
    cout << i << " ";
    i++;
  }
}

/*_____________________________________________________*/

void challenge9() {
  // Input angka
  int angka;
  cout << "Masukkan angka: ";
  cin >> angka;

  // Tabel perkalian input angka
  for (int i = 1; i <= angka; i++) 
  {
    cout << angka << "x" << i
    << " = " << angka * i << endl;
  }
}

/*_____________________________________________________*/

void challenge10() {
  // Masukkan 5 angka
  int angka[5];
  cout << "Masukkan 5 angka: ";

  int total = 0;
  
  //Penjumlahan 5 angka
  for (int i = 0; i < 5; i++) {
    cin >> angka[i];
    total += angka[i];
  }
  
  cout << "Total: " << total << endl;
}


int main() {
    challenge5();
    challenge6();
    challenge7();
    challenge8();
    challenge9();
    challenge10();
    return 0;
}