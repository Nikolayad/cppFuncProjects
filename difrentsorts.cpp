#include <iostream> 
#include <ctime> 
using namespace std;

int main()
{
    srand(time(NULL));
    const int SIZE = 10;
    int begin = 0;
    int iterazz = 0;
    int min = 10;
    int max = 100;
    int end = SIZE;
    int array1[SIZE] = {};
    int bubiterazz = 0;

    for (int i = 0; i < SIZE; i++) {
        array1[i] = min + rand() % (max - min);

    }
    cout << endl;
    bool hhh = true;
    for (int i = 0; i <= SIZE - 1; i++) {
        for (int j = 0; j < SIZE - 1 - i; j++) {
            bubiterazz++;
            if (array1[j] > array1[j + 1]) {
                swap(array1[j], array1[j + 1]);
                hhh = false;
            }




        }
        if (hhh == true) break;

    }

    int insertioniteraz = 0;
    int array2[SIZE] = {};
    for (int i = 0; i < SIZE; i++) {

        cout << array2[i] << "  ";
    }
    cout << endl;
    for (int i = 1; i < SIZE; i++) {
        for (int j = i; j > 0; j--) {
            insertioniteraz++;
            if (array2[j] < array2[j - 1]) {
                swap(array2[j], array2[j - 1]);
            }
            else break;

        }


    }
    cout << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << array2[i] << " ";
    }


    int array[SIZE] = { };
    for (int i = 0; i < SIZE; i++) {
        array[i] = min + rand() % (max - min);

    }

    bool hh = true;
    for (int begin = 0; begin < end;) {
        for (int j = begin; j < end - 1; j++) {

            if (array[j] > array[j + 1]) {
                swap(array[j], array[j + 1]);
                hh = false;
            }

            iterazz++;



        }
        if (hh == true) {
            break;
        }
        end--;

        hh = true;
        for (int j = end - 1; j > begin; j--) {
            if (array[j] < array[j - 1]) {
                swap(array[j], array[j - 1]);
                hh = false;
                iterazz++;
            }
        }

        if (hh == true) {
            break;
        }
        begin++;





    }
    cout << endl << "bubble sort: " << bubiterazz << endl;
    cout << endl << "insertion sort: " << insertioniteraz << endl;
    cout << endl << " shaker sort: " << iterazz << endl;