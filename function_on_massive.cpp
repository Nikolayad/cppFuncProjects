#include <iostream>
using namespace std;



int MinArray(int array[],int size)
{
    int min = array[0];
    for (int i = 0; i < size; i++)
    {
        if (min > array[i])
        {
            min = array[i];
        }
    }
    return min;
}

int MaxArray(int array[], int size)
{
    int max = array[0];
    for (int i = 0; i < size; i++)
    {
        if (max < array[i])
        {
            max = array[i];
        }
    }
    return max;
}

int SummaArray(int array[], int size)
{
    int Summa = 0;
    for (int i = 0; i < size; i++)
    {
        Summa += array[i];
    }
    return Summa;
}

float AvgArray(int array[], int size)
{
    return (float)SummaArray(array,size) / size;
}

int MaxIndexArray(int array[], int size)
{
    int max = array[0];
    int maxindex = 0;
    for (int i = 0; i < size; i++)
    {
        if (max < array[i])
        {
            max = array[i];
            maxindex = i;
        }
    }
    return maxindex;
}


int MinIndexArray(int array[], int size)
{
    int min = array[0];
    int minindex = 0;
    for (int i = 0; i < size; i++)
    {
        if (min > array[i])
        {
            min = array[i];
            minindex = i;
        }
    }
    return minindex;
}

int SummaTwoArray(int array[],int size, int array2[], int size2)
{
    int summa1 = 0;
    int summa2 = 0;
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " " << endl;
        summa1 += array[i];
    }
    for (int j = 0; j < size2; j++)
    {
        cout << array2[j] << " " << endl;
        summa2 += array2[j];
    }
    cout << summa1 + summa2;
    return summa1 + summa2;
}

int SwapArray(int array[], int size)
{
    for (int i = 0; i < size / 2; i++)
    {
        swap(array[i], array[size -1 - i]);
    }
}

int main()
{
    int array2[] = { 34,6,23,62364,213,623,727,235 };
    int size2 = sizeof(array2) / sizeof(array2[0]);
    int array[] = { 23,645,7,1,35,6,7527,6 };
    int size = sizeof(array) / sizeof(array[0]);
    cout << "Summa: " << SummaArray(array, size) << endl;
    cout << "Max: " << MaxArray(array, size) << endl;
    cout << "Max: " << MinArray(array, size) << endl;
    cout << "Avg: " << AvgArray(array, size) << endl;
    cout << "MinIndex: " << MinIndexArray(array, size) << endl;
    cout << "MaxIndex: " << MaxIndexArray(array, size) << endl;
    cout << "SummaTwoArray: " << SummaTwoArray(array, size, array2, size2) << endl;
    cout << "SwapArray: " << SwapArray(array, size) << endl;
}


