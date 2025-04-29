#include <iostream>
using namespace std;

float Panjang, Lebar;

float FungsiHitungLuas(){
    return Panjang * Lebar;
}

int main(){
    cout << "masukkan panjang : ";
    cin >> Panjang;
    cout << " masukkan Lebar : ";
    cin >> Lebar;
    
    cout <<  "Luas Persegi Panjang : " << FungsiHitungLuas();
}