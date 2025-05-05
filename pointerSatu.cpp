#include <iostream>
using namespace std;

class mahasiswa {
    public:
    int nim;
    void shownim(){
        cout << "No Indukn = " << nim << endl;
    }

};

int main (){

    mahasiswa mhs; //object mhs
    mhs.nim = 5;
    mhs.shownim(); //member acces operator

    mahasiswa &refMhs = mhs; //pointer reference refMhs
    refMhs.nim = 2; //member acces operator
    whs.shownim();
    
    mahasiswa *pMhs = &mhs; //pointer reference pMhs
    pMhs->nim = 3; //arrow operator
    pMhs ->shownim();
    return 0;
}
