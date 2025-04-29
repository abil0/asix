#include <iostream>
using namespace std;

float LuasPersegiPanjang(float p, float l){
    return p * l;
}

float LuasLingkaran(float r){
    return 3.14 * r * r;
}


int main(){
    int Pilihan;
    float panjang, lebar, jejari;

    do
    {

    cout <<"=======menu=======" << endl;
    cout <<"1. Menghitung Luas Persegi Panjang" << endl;
    cout <<"2. Menghitung luas Lingkaran" << endl;
    cout <<"3. Exit" << endl;
    
    cout << "Masukkan Pilihan (1/2/3) : ";
    cin >> Pilihan;
    cout << endl;

    switch (Pilihan) 
        {
        case 1 : 
            cout << "Menghitung Luas Persegi Panjang" << endl;
            cout << "Masukkan Panjang : ";
            cin >> panjang;
            cout << "Masukkan Lebar : ";
            cin >> lebar;
            cout << "Luas Persegi Panjang : " << LuasPersegiPanjang(panjang, lebar) << endl;
            cout << endl;
            break;
        
        case 2 :
            cout << "Menghitung Luas Lingkaran" << endl;
            cout << "Masukkan Jejari : ";
            cin >> jejari;
            cout << "Luas Lingkaran : " << LuasLingkaran(jejari) << endl;
            cout << endl;
            break;

        case 3 :
            break;
        default :
            cout << "Pilihan anda salah!" << endl;
            cout << endl;
            break;
        }
    }while(Pilihan !=3);
}