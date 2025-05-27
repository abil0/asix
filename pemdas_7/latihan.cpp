#include <iostream>
using namespace std;

class barang {
    private :
    string  namabarang;
    string kodebarang;

    public :
    // construcktor  dengan parameter
    barang( string nama, string kode)

    {
        namabarang = nama ;
        kodebarang = kode ;
    }
    // fungsi menampilkan info barang 
        void tampilkaninfo() {
        cout << "nama barang :" << namabarang << endl;
        cout << "kode barang :" << kodebarang << endl;
    
        } 


};

int main () {
    // mmbuat objek class 
    barang barang1 ("TV", "brg001");
    // mnmpilkan info barang 
    barang1.tampilkaninfo();

    return 0;
}