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
int luasPersegi (int a, int b)
{
    return a * b;
}

int kelilingPersegi (int a, int b)
{
    return 2 * (a + b);
}
void output ()
{
    cout << "Luasnya :  " << luasPersegi
    (panjang, lebar) << endl;

}








