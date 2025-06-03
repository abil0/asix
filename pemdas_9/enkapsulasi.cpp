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
    remoteLampu.setsaklarNo(0, "lampu teras rumah");
    remoteLampu.setsaklarNo(1, "lampu ruang tamu");
    remoteLampu.

}