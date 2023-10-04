#include <iostream>
using namespace std;
int main()
{
    float a;
    short a1;
    setlocale(LC_ALL, "");
    cout << "Сколько минут длился ваш разговор?\n";
    cin >> a;
    
    
    cout << "Ваш мобильный оператор:(1,2,3)\n";
    cin >> a1;
    switch (a1) 
    {
    case 1:
        cout << "Ваш разговор стоит " << a * 4 << " рублей";
        break;
    case 2:
        cout << "Ваш разговор стоит " << a * 6 << " рублей";
        break;
    case 3:
        cout << "Ваш разговор стоит " << a * 7 << " рублей";
        break;
    default:
        cout << "Error";
    }
    
   
}