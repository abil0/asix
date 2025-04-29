#include <iostream>
using namespace std;

float Luas, Panjang, Lebar;

void ProsedurHitungLuas(){
    Luas = Panjang * Lebar;
}
void ProsedurInputData(){
    cout << "masukkan panjang : ";
    cin >> Panjang;
    cout << "masukkan lebar : ";
    cin >> Lebar;
}

void ProsedurOutputData(){
    cout << "Luas Persegi Panjang : " << Luas << endl;
}

int main(){
    ProsedurInputData();
    ProsedurHitungLuas();
    ProsedurOutputData();
}