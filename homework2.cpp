#include <iostream>
using namespace std;


int main()
{
    setlocale(LC_ALL, "rus");
    char simvol;
    cout << "Ведите символ: ";
    cin >> simvol;
    if (simvol >= 65 && simvol <= 90 )
        cout << "Вы ввели " << simvol << " большую английскую букву";
    else if (simvol >= 97 && simvol <= 122)
        cout << "Вы ввели " << simvol << " маленькую английскую букву";
    else if (simvol >= 48 && simvol <= 57)
        cout << "Вы ввели " << simvol << " число";
    else if (simvol >= 21 && simvol <= 47)
        cout << "Вы ввели " << simvol << " знак припенания";
    else if (simvol >= 58 && simvol <= 64)
        cout << "Вы ввели " << simvol << " знак припенания";
    else
        cout << "Вы ввели " << simvol << " другое";



    /*  int dohod,opozdania;
    cout << "Vedite dohod ";
    cin >> dohod;
    cout << "Vedite opozdania ";
    cin >> opozdania;
    if ()*/

    /*int beeline, megafon, mts,loong,a;
    cin >> loong;
    beeline = 7;
    megafon = 5;
    mts = 3;
    a = loong 
    if ()*/

        





}

