
#include <iostream>
using namespace std;

class Segitiga{


    public: 
    int a;
    int t;


    void inputData (){
            cout << "Masukkan Alas Segitiga : ";
            cin >> a;
            cout << "Masukkan Tinggi Segitiga : ";
            cin >> t;
        }

    private: 
        float luas(int a, int t){
            return 0.5 * a * t;
        }

    public:
        void outputData (){
            if (a % 2 == 0) 
            {
                cout << "Luas Segitiga : " << luas (a, t) << "cm" << endl;

            }else {
                cout << "Alas Yang dimasukkan adalah bilangan ganjil. Luas tidak dapat dihitung";
            }
            
        }


};

int main(){

    Segitiga abil;
    abil.inputData();
    abil.outputData();
    
    

}

/*
    =
    int alas;
    alas = 10; // 10

    == 
    nilainya harus sama
    
    int a;
    float b;
    
    a = 10;
    b = 10;

    if (a == b) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    ===
    nilai dan tipe data harus sama

    int a;
    int b;

    a = 10;
    b = 10;
    
    if (a === b) {
        cout << "Yes";
    } else {
        cout << "No";
    }
*/