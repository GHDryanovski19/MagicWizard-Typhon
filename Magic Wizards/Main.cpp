#include "Project.h"

#include <iostream>
#include <string>
#include <iomanip>
#include <windows.h>
#include <conio.h>

using namespace std;

int mainMenu();
void levelMenu();

// ------------------------------- Levels Menu ------------------------------- //

void levelMenuSelector()
{
    art();

    int Set[] = { 11, 11, 11, 11, 11, 11, 11 };
    int counter = 2;
    char key;

    int levelSelector;

    for (int i = 0;;)
    {
        gotoxy(24, 12); color(Set[0]); cout << "1. Level 1 ";

        gotoxy(24, 13); color(Set[1]); cout << "2. Level 2";

        gotoxy(24, 14); color(Set[2]); cout << "3. Level 3 ";

        gotoxy(24, 15); color(Set[3]); cout << "4. Level 4 ";

        gotoxy(24, 16); color(Set[4]); cout << "5. Level 5 ";

        gotoxy(24, 17); color(Set[5]); cout << "6. Mystery ";

        gotoxy(24, 18); color(Set[6]); cout << "7. Go Back ";

        key = _getch();

        if (key == 72 && (counter >= 2 && counter <= 7)) // 72 - up arrow
        {
            counter--;
        }
        if (key == 80 && (counter >= 1 && counter <= 6)) // 80 - down arrow
        {
            counter++;
        }
        if (key == '\r') // enter key
        {
            if (counter == 1)
            {
                system("CLS");
                level1();
                break;
            }
            if (counter == 2)
            {
                system("CLS");
                level2();
                break;
            }
            if (counter == 3)
            {
                system("CLS");
                level3();
                break;
            }
            if (counter == 4)
            {
                system("CLS");
                level4();
                break;
            }
            if (counter == 5)
            {
                system("CLS");
                level5();
                break;
            }
            if (counter == 6)
            {
                system("CLS");
                credits();
                break;
            }
            if (counter == 7)
            {
                system("CLS");
                levelMenu();
                break;
            }
        }

        Set[0] = 11; // Sets the color of the other buttons everytime you switch to cyan(11)
        Set[1] = 11;
        Set[2] = 11;
        Set[3] = 11;
        Set[4] = 11;
        Set[5] = 11;
        Set[6] = 11;

        if (counter == 1) {Set[0] = 14;} // 14 - yellow
        if (counter == 2) {Set[1] = 14;}
        if (counter == 3) {Set[2] = 14;}
        if (counter == 4) {Set[3] = 14;}
        if (counter == 5) {Set[4] = 14;}
        if (counter == 6) {Set[5] = 14;}
        if (counter == 7) {Set[6] = 14;}
    }
}

void levelMenu()
{
    art();

    int Set[] = { 11, 11, 11 };
    int counter = 2;
    char key;

    int levelSelector;

    for (int i = 0;;)
    {
        gotoxy(24, 12); color(Set[0]); cout << "1. Your last level ";

        gotoxy(24, 13); color(Set[1]); cout << "2. Choose wich level";

        gotoxy(24, 14); color(Set[2]); cout << "3. Go Back ";

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
                break;
            }
            if (counter == 2)
            {
                system("CLS");
                levelMenuSelector();
                break;
            }
            if (counter == 3)
            {
                system("CLS");
                mainMenu();
                break;
            }
        }

        Set[0] = 11; // Sets the color of the other buttons everytime you switch to cyan(11)
        Set[1] = 11;
        Set[2] = 11;

        if (counter == 1) { Set[0] = 14; } // 14 - yellow
        if (counter == 2) { Set[1] = 14; }
        if (counter == 3) { Set[2] = 14; }
    }
}
// ------------------------------- Levels Menu ------------------------------- //


// ------------------------------- Main Menu ------------------------------- //
int mainMenu()
{
    art();

    int Set[] = { 11, 11, 11 };
    int counter = 2;
    char key;

    for (int i = 0;;)
    {
        gotoxy(24, 12); color(Set[0]); cout << "1. Start your new adventure ";

        gotoxy(24, 13); color(Set[1]); cout << "2. Levels ";

        gotoxy(24, 14); color(Set[2]); cout << "3. Exit ";

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
                break;
            }
            if (counter == 2)
            {
                system("CLS");
                levelMenu();
                break;
            }
            if (counter == 3)
            {
                return 0;
            }
        }

        Set[0] = 11; // Sets the color of the other buttons everytime you switch to cyan(11)
        Set[1] = 11;
        Set[2] = 11;

        if (counter == 1) { Set[0] = 14; } // 14 - yellow
        if (counter == 2) { Set[1] = 14; }
        if (counter == 3) { Set[2] = 14; }
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
