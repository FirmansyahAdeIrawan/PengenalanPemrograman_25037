/*input nama dan usia*/

#include <iostream>
using namespace std;

int main()
{
    string nama;
    int umur;
    
    cout << "Siapa namamu?" << endl;
    cin >> nama;
    
    cout << "Berapa umur kamu?" << endl;
    cin >> umur;

    
    cout << "Halo " << nama << "! " << "jadi kamu berumur " << umur << " tahun ya" << endl;
    return 0;
}
