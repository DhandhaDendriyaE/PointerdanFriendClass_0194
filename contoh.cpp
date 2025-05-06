#include <iostream>
using namespace std;

class PersegiPanjang

{
public:
    int panjang, lebar;

public:
   void input()
   {
    cout << "masukkan panjang : ";
    cin >> panjang;
    cout << "masukkan lebar : ";
    cin >> lebar;
   }

   int luasPp(int a, int b) 
   {
    return a * b;

   }

   Lingkaran ol;

};

class Lingkaran
{
public:
    int jarijari;

    int input()
    {
        cout << "Masukkan jari-jari : ";
        cin >> jarijari;
    }
};

int luaslingkaran(int r)
{
    return 3.14 * r * r;
}

int main()
{
    PersegiPanjang objekPP;
    Lingkaran ol;

    cout << "Masukkan panjang : ";
    cin >> objekPP.panjang;
    cout << "Masukkan Lebar : ";
    cin >> objekPP.lebar;
    cout << "Luas Persegi Panjang : " << objekPP.luasPp(objekPP.panjang, objekPP.lebar);

}
