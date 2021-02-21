#include "Project.h"

#include <iostream>
#include <string>
#include <iomanip>
#include <windows.h>
#include <conio.h>

using namespace std;

int main()
{
    system("title Magic Wizards");

    introduction();


    // ------------------------------- Main Menu ------------------------------- //

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
                cout << "Currently Unavailable.";
            }
            if (counter == 2)
            {
                cout << "The Levels are currently under development.";
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
    // ------------------------------- Main Menu ------------------------------- //

    return 0;
}
