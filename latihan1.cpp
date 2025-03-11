#include <iostream>
using namespace std;

float Luas, Panjang, Lebar;
void ProsedurInputData(){
    cout << "masukkan panjangnya :";
    cin >> Panjang;
    cout << "masukkan lebarnya :";
    cin >> Lebar;
}

void ProsedurHitungLuas(){
    Luas = Panjang * Lebar;
}

void ProsedurOutputData(){
    cout << "luas persegi panjang :" << Luas;
}

int main ()
{
    ProsedurInputData();
    ProsedurHitungLuas();
    ProsedurOutputData();
}