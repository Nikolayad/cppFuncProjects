#include <iostream>
#include <windows.h>
#include <string>
#include <fstream>
#include <conio.h>
#include <stdio.h>
#include "Header.h"


using namespace std;

enum ConsoleColor
{
    Black = 0,
    Blue = 1,
    Green = 2,
    Cyan = 3,
    Red = 4,
    Magenta = 5,
    Brown = 6,
    LightGray = 7,
    DarkGray = 8,
    LightBlue = 9,
    LightGreen = 10,
    LightCyan = 11,
    LightRed = 12,
    LightMagenta = 13,
    Yellow = 14,
    White = 15
};

void SetColor(ConsoleColor text, ConsoleColor background)
{
    HANDLE hConsoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsoleHandle, text | background);
}

void moveCursor(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

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
        moveCursor(5, 5+i);
        for (int j = 0; j < size2; j++)
        {
            cout << array[i][j] << array[i][j];
        }
        cout << endl;
    }
}

void ShowLogo()
{
    moveCursor(10, 2);
    cout << "$$  $$ $$$$$$  $$$$ ";
    moveCursor(10, 3);
    cout << "$$$ $$ $$     $$    ";
    moveCursor(10, 4);
    cout << "$$ $$$ $$$$    $$$$ ";
    moveCursor(10, 5);
    cout << "$$  $$ $$         $$";
    moveCursor(10, 6);
    cout << "$$  $$ $$      $$$$ ";
    moveCursor(10, 7);
}

void ShowMenu()
{
    int counter = 0;
    int keyCode = 0;
    while (true)
    {
        moveCursor(15, 10);
        if(counter == 0)SetColor(ConsoleColor::Yellow, ConsoleColor::Black);
        else SetColor(ConsoleColor::Green, ConsoleColor::Black);
        cout << "NEW GAME";
        if (counter == 1)SetColor(ConsoleColor::Yellow, ConsoleColor::Black);
        else SetColor(ConsoleColor::Green, ConsoleColor::Black);
        moveCursor(17, 12);
        cout << "EXIT";

        int keyCode = keyboardListener();
        switch (keyCode)
        {
        case 119:
            if (counter > 0)counter--;
            break;
        case 115:
            if (counter < 1)counter++;
        }
        if (keyboardListener() == 119)
        {
            if (counter > 0) counter--;
        }
        if (keyboardListener() == 115)
        {
            if (counter < 1) counter++;
        };
        cout << counter;
    }
}

void render(char** field)
{

    ShowLogo();
    ShowMenu();

}

void windowSettings(int width,int height) 
{
    system("color 02");
    HANDLE out_handle = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD crd = { 25, 25 };
    SMALL_RECT src = { 0, 0, crd.X - 1, crd.Y - 1 };
    SetConsoleWindowInfo(out_handle, true, &src);
    SetConsoleScreenBufferSize(out_handle, crd);

    HWND hWnd;
    HMENU hm;
    if ((hWnd = GetConsoleWindow()) == NULL)
    {
        printf("No console window!?\n");
        return;
    }
    hm = GetSystemMenu(hWnd, FALSE);
    RemoveMenu(hm, SC_SIZE, MF_BYCOMMAND | MF_REMOVE);
    RemoveMenu(hm, SC_MAXIMIZE, MF_BYCOMMAND | MF_REMOVE);
    DrawMenuBar(hWnd);

    //pozisiorivavivanie
    HWND window_header = GetConsoleWindow();
    MoveWindow(window_header, 800, 300, width * 15, height * 30,false);
}

int keyboardListener()
{
    moveCursor(13, 19);
    cout << " kye code: ";
   
    if (_kbhit())
    {
        moveCursor(17, 20);
        cout << "     ";
        moveCursor(17, 20);
        int n = _getch();
        cout << n;
        return n;
    }
}

int main()
{
    windowSettings(20, 30);
    system("mode con cols = 30 lines = 20");
    srand(time(NULL));
    char** field = createField(9, 12);
    render(field);


}