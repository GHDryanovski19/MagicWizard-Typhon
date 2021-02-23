#include "Project.h"

#include <iostream>
#include <string>
#include <iomanip>
#include <windows.h>
#include <conio.h>

using namespace std;

int mainMenu();

// ------------------------------- Levels Menu ------------------------------- //
int levelMenu()
{
    art();

    int Set[] = { 7, 7, 7 };
    int counter = 2;
    char key;

    int levelSelector;

    for (int i = 0;;)
    {
        gotoxy(24, 12);
        color(Set[0]);
        cout << "1. Your last level ";

        gotoxy(24, 13);
        color(Set[1]);
        cout << "2. Choose wich level";

        gotoxy(24, 14);
        color(Set[2]);
        cout << "6. Go Back ";

        key = _getch();

        if (key == 72 && (counter >= 2 && counter <= 3)) // 72 - up arrow
        {
            counter--;
        }
        if (key == 80 && (counter >= 1 && counter <= 2)) // 80 - down arrow
        {
            counter++;
        }
        if (key == '\r') // enter key
        {
            if (counter == 1)
            {
                system("CLS");
                level1();
            }
            if (counter == 2)
            {
                cin >> levelSelector;
                if (levelSelector == 1)
                {
                    system("CLS");
                    level1();
                }
                if (levelSelector == 2)
                {
                    system("CLS");
                    level2();
                }
                if (levelSelector == 3)
                {
                    system("CLS");
                    level3();
                }
                if (levelSelector == 4)
                {
                    system("CLS");
                    level4();
                }
                if (levelSelector == 5)
                {
                    system("CLS");
                    level5();
                }
                else
                {
                    cout << "Invalid Number";
                }
            }
            if (counter == 3)
            {
                system("CLS");
                mainMenu();
            }
        }

        Set[0] = 7; // Sets the color of the other buttons everytime you switch to white(7)
        Set[1] = 7;
        Set[2] = 7;

        if (counter == 1)
        {
            Set[0] = 14; // 14 - yellow
        }
        if (counter == 2)
        {
            Set[1] = 14; // 14 - yellow
        }
        if (counter == 3)
        {
            Set[2] = 14; // 14 - yellow
        }
    }
}
// ------------------------------- Levels Menu ------------------------------- //


// ------------------------------- Main Menu ------------------------------- //
int mainMenu()
{
    art();

    int Set[] = { 7, 7, 7 };
    int counter = 2;
    char key;

    for (int i = 0;;)
    {
        gotoxy(24, 12);
        color(Set[0]);
        cout << "1. Start your new adventure ";

        gotoxy(24, 13);
        color(Set[1]);
        cout << "2. Levels ";

        gotoxy(24, 14);
        color(Set[2]);
        cout << "3. Exit ";

        key = _getch();

        if (key == 72 && (counter >= 2 && counter <= 3)) // 72 - up arrow
        {
            counter--;
        }
        if (key == 80 && (counter >= 1 && counter <= 2)) // 80 - down arrow
        {
            counter++;
        }
        if (key == '\r') // enter key
        {
            if (counter == 1)
            {
                system("CLS");
                level1();
            }
            if (counter == 2)
            {
                system("CLS");
                levelMenu();
            }
            if (counter == 3)
            {
                return 0;
            }
        }

        Set[0] = 7; // Sets the color of the other buttons everytime you switch to white(7)
        Set[1] = 7;
        Set[2] = 7;

        if (counter == 1)
        {
            Set[0] = 14; // 14 - yellow
        }
        if (counter == 2)
        {
            Set[1] = 14; // 14 - yellow
        }
        if (counter == 3)
        {
            Set[2] = 14; // 14 - yellow
        }
    }
}
// ------------------------------- Main Menu ------------------------------- //

int main()
{
    system("title Magic Wizards");

    introduction();


    mainMenu();

    return 0;
}
