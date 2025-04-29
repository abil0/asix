#include <iostream>
using namespace std;

float HitungRerataBerparameter(float x, float y){
    return (x + y) / 2;
 }

 string CekStatusBerparameter(float a) {
    if (a >=60) {
        return "lulus";
    } else {
        return "tidak lulus";
    }
 }

int main()
{
    float ujian1, ujian2;

    cout << "masukkan Nilai ujian1 : ";
    cin >> ujian1;
    
    cout << "masukkan Nilai ujian2 : ";
    cin >> ujian2;
    
    cout << "Rerata Nilai Ujian : " <<CekStatusBerparameter(HitungRerataBerparameter(ujian1, ujian2)); 
}