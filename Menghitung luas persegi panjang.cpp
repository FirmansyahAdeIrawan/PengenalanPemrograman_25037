/* Program menghitung luas persegi panjang */

#include <iostream>
using namespace std;
int main()
{
    float panjang, lebar, luas;
    cout << "Menghitung Luas Persegi panjang (dalam satuan cm^2)" << endl;
    cout << "Masukan Panjang: ";
    cin >> panjang;
    cout << "Masukan Lebar: ";
    cin >> lebar;
    
    luas = panjang * lebar;
    
    cout << "Luas dari persegi panjang adalah " << luas << "cm^2" << endl;
    return 0;
}