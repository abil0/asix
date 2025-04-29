#include<iostream>
using namespace std;

int main() {
    int i;
    cout << "Perulangan For Pencacah Naik" << endl;
    for ( i = 0; i <= 4; i++)
    {
        cout << "Nilai i : " << i << " Lari Keliling Lapangan" << endl;
    }
    
    cout << "Nilai i terakhir : " << i << endl;
    cout << endl;

    cout << "Perulangan For Pencacah Turun" << endl;
    for ( i = 4; i >= 0; i--)
    {
        cout << "Nilai i : " << i << " Lari Keliling Lapangan"  << endl;
    }
    
    cout << "Nilai i terakhir : " << i << endl;
    cout << endl;
}