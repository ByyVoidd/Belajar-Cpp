#include <iostream> 
using namespace std;

int main() {
  bool warna_merah {false};
  bool warna_biru {false};

  if(warna_merah == true){
    cout << "Amel ganteng" << endl;
  } else if(warna_biru == true){
    cout << "Amel tidak ganteng" << endl;
  } else {
    cout << "Tidak ada warna" << endl;
  }

  char nilai = 65.5;
  cout << "Nilai: " << nilai << endl;
  cout << "Nilai: " << static_cast<float>(nilai) << endl;
  return 0;
}