#include <iostream>
using namespace std;

 class Dosen(
    public:
    void tampilnama(){
        cout << "Namanya adalah: " << nama << endl;
    }
 );
 
 class staff (
    public:
    int nidn;
 );

 int main(){
    Dosen ds;
    ds.nama = "Giga";
    dserf.tampilnama();

    Dosen *pds = &ds;
    pds->nama = "Joko";
    cout << " Alamat Memori =" << pds << endl
    dsref.tampilnama();

    Dosen *pds = &ds;
    pds->nama = "Reza";
    cout << " Alamat Memori =" << pds << endl;
    pds->tampilnama();

    int a = 5;
    int b = 3;
    int *c = &a;
    *c = 9;
    cout << endl;
    cout << a << endl;

    cout << "alamat memori a = " << &a << endl;
    cout << "alamat memori c = " << c << endl;
    c = &b;
    cout << "alamat memori c = " << c << endl;
    cout << "cetak c = " << *c << endl;

 }
    