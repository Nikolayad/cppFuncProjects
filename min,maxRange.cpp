#include <iostream>
using namespace std;

int main()
{
    /*srand(time(NULL));
    const int size = 10;
    int max 
    int min 
    int array[size] = {};
    for (int i = 0; i < size; i++)
    {
        array[i] = min + rand() % (max + 1 - min);
        cout << array[i] << ' ';
        if (max < array[i])
        {
            max = array[i];
        }

    }
    cout << endl << max;*/


    const int size = 15;
    int max, min;
    int Summa = 0;
    cin >> min >> max;
    int array[size] = {};
    for (int i = 0; i < size; i++)
    {
        array[i] = min + rand() % (max + 1 - min);
        cout << array[i] << ' ';
        Summa = Summa + array[i];
        if (max < array[i]) 
        {
            max = array[i];
        }
        if (array[i] < min)
        {
            min = array[i];
        }


    }
    cout << endl << "MIN = " << min;
    cout << endl << "MAX = " << max;
    cout << endl << "Summa = " << Summa;
    cout << endl << "Srednee = " << (Summa / 15);



}

