#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    //ADA 3 MACAM TIPE DATA

    // 1. BRACED INITIALIZATION
    int lion_count {7};
    int cat_count {13};
    
    int total_count {lion_count + cat_count};

    cout << "Total Count: " << total_count << endl;

    // 2. ASSIGNMENT INITIALIZATION
    int fish_count = 10;
    int turtle_count = 4;

    int total_pet_count = fish_count + turtle_count;

    cout << "Total Pet Count: " << total_pet_count << endl;
    // 3. FUNCTIONAL INITIALIZATION
    int dog_count(5);
    int bird_count(3);

    int total_animal_count (dog_count + bird_count);

    cout << "Total Animal Count: " << total_animal_count << endl;

    // INTEGER MODIFIERS
    short short_var = 32767; // 2 bytes
    int int_var = 2147483647; // 4 bytes
    long long_var = 2147483647; // 4 bytes  

    signed short signed_short_var = -32768; // 2 bytes
    unsigned short unsigned_short_var = 65535; // 2 bytes

    signed int signed_int_var = -2147483648; // 4 bytes
    unsigned int unsigned_int_var = 4294967295; // 4 bytes

    signed long signed_long_var = -2147483648; // 4 bytes
    unsigned long unsigned_long_var = 4294967295; // 4 bytes

    long long long_long_var = 9223372036854775807; // 8 bytes

    //ANGKA PECAHAN DESIMAL
    float float_var = 3.14f; // 4 bytes
    double double_var = 3.141592653589793; // 8 bytes
    long double long_double_var = 3.141592653589793238462643383279502884L; // 16 bytes

    cout << setprecision(20);
    cout << "Float: " << float_var << endl;
    cout << "Double: " << double_var << endl;
    cout << "Long Double: " << long_double_var << endl;
    return 0;
}