#include <iostream>
using namespace std;

int panjang, lebar;

void input()
{
    cout << "Masukan Panjang :";
    cin >> panjang;
    cout << "Masukan lebar";
    cin >> lebar;

}
int luasPersegi ()
{
    return panjang * lebar;
}


void output ()
{
    cout << "Hasilnya :  " << luasPersegi();

}




