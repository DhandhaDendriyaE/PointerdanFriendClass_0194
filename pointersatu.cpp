#include <iostream>
using namespace std;


class mahasiswa
{public:
    int nim;
    void showNIM(){
    cout <<"No Induk " <<nim<<endl;
    }
};

int main (){
    mahasiswa mhs(1);
    mhs.showNIM();

    mahasiswa &refMhs = mhs;
    refMhs.nim = 2;
    mhs.showNIM();

    mahasiswa *pMhs = &mhs;
    pMhs->nim = 3;
    pMhs->showNIM();
    return 0;
};