#include <iostream> 
using namespace std;

int main() {
  bool warna_merah {false};
  bool warna_biru {false};

  if(warna_merah == true){
    cout << "iya" << endl;
  } else if(warna_biru == true){
    cout << "tidak" << endl;
  } else {
    cout << "Tidak ada warna" << endl;
  }

  char nilai = 65.5;
  cout << "Nilai: " << nilai << endl;
  cout << "Nilai: " << static_cast<float>(nilai) << endl;
  cout << "nilai anda kosong";
  return 0;
}