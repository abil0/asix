#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    cout << "Perulangan Do While" << endl;
    int x;
    int PerulanganDoWhile = 0;
    srand(time(0));
    x = rand() % 10;

    cout << "Nilai x awal : " << x << endl;
    do
    {
       cout << "Nilai x : " << x << "  Lari Keliling Lapangan" << endl;
       x = rand() % 10;
       PerulanganDoWhile++; 
    } while (x < 7);
    cout << "Nilai x Terakhir : " << x << endl;
    cout << "Jumlah Perulangan : " << PerulanganDoWhile << endl;
}
