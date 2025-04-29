#include<iostream>
using namespace std;


struct Pelanggan
{
     string namaPelanggan;
     char kategoriPelanggan;


    string nomorIdentitas;

    string jumlahBarang;
    float hargaBarang,totalHarga,diskon,hargaAkhir;

};

int main()

{
   Pelanggan plg;
cout << "Masukkan nama pelanggan = ";
cin  >> plg.namaPelanggan;
cout << "Masukkan nomor identitas = ";
cin  >> plg.nomorIdentitas;
cout << "Masukkan kategori pelanggan (m/n) = ";
cin  >> plg.kategoriPelanggan;


    
        cout << "Masukkan jumlah barang yang dibeli = ";
        cin  >> plg.jumlahBarang;
         
        

     {
       cout << "Maksimal 10 barang per pembelian.silahkan masukkan ulang  = ";       
};
      
};




