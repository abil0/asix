#include<iostream>
using namespace std;

class remoteLampu {
private:
    string saklarNo[10];
public:
    void setsaklarNo( int i, string value) {
        saklarNo[i] = value;
    }
    string getsaklarNo(int i) {
        return saklarNo[i];
    }
};

int main() {
   remoteLampu lampuRumah;
   
    remoteLampu.setsaklarNo(0, "lampu teras rumah");
    remoteLampu.setsaklarNo(1, "lampu ruang tamu");
    remoteLampu.setsaklarNo(2, "lampu kamar tidur");
    remoteLampu.setsaklarNo(3, "lampu dapur");

    cout << lampuRumah.getsaklarNo(0) << endl;
    cout << lampuRumah.getsaklarNo(1) << endl;
    

}