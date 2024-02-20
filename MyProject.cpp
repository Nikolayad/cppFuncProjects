#include <iostream>
using namespace std;
char** createField(int widht, int height)
{
    char** field = new char* [height];
    for (int i = 0; i < height; i++)
    {
        field[i] = new char[widht];
        for (int j = 0; j < widht; j++)
        {
            field[i][j] = char(176);
        }
    }
    return field;

}

void showArray(char** array)
{
    int size = _msize(array) / sizeof(array[0]);
    int size2 = _msize(array[0]) / sizeof(array[0][0]);
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            cout << array[i][j] << array[i][j];
        }
        cout << endl;
    }
}

void render(char** field)
{
    showArray(field);
}

int main()
{
    system("mode con cols = 30 lines = 20");
    srand(time(NULL));
    char** field = createField(9, 12);
    render(field);
    system("pause");
    
}
