#include "Common.h"
#include "Project.h"

#include <iostream>
#include <string>
#include <Windows.h>
#include <conio.h>

using namespace std;

string playerName;

void introduction()
{
    cout << "                                     &&" << endl;
    cout << "                                    %  %" << endl;
    cout << "                                   %    %" << endl;
    cout << "                                  %   %%%%" << endl;
    cout << "                                 %#&%%%   %" << endl;
    cout << "                               %    %& %*(&" << endl;
    cout << "                               %  *   &&    *" << endl;
    cout << "                              %  &.##//   %#&." << endl;
    cout << "                             % .%/  .%( %#   %" << endl;
    cout << "                         .%(&  &%%(%*&     & %& %/%." << endl;
    cout << "                        %  #*  #&&%%&%%%&%&#   %. #/" << endl;
    cout << "                      %*%#    ,%  ,%   % *%   /.%.%" << endl;
    cout << "                      %  %         .%   #.      %  %" << endl;
    cout << "                       (%           %   ,#       &." << endl;
    cout << "                       % &,         %    %        %" << endl;
    cout << "                      %  ,%/#       %    %    ./(%,#" << endl;
    cout << "                     %      //      &   %  %%%#    .*" << endl;
    cout << "                    %           %%%%#%%%.           &/" << endl;
    cout << "                   &                                ,%" << endl;
    cout << "                   %                 #%,          .  %" << endl;
    cout << "                   %%%.                           *," << endl;
    cout << "                      %                           * (" << endl;
    cout << "                      %  .                         &" << endl;
    cout << "                         %   /          &    %&..#%" << endl;
    cout << "                             %    %    ,(%%%" << endl;
    cout << "                               *    *. " << endl;
    cout << endl;
    cout << "===========================================================================================" << endl;
    cout << endl;
    cout << "                  Hello, my name is Stringgar the Wizard." << endl;
    cout << "           Today I'm going to teach you some things about strings." << endl;
    cout << endl;
    cout << "===========================================================================================" << endl;
    cout << endl;
    cout << "                          First, what is your name." << endl;
    cout << "                                My name is ";
    getline(cin, playerName);
    system("CLS");
}

// ------------------------------- Main Menu ------------------------------- //

void color(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void gotoxy(int x, int y)
{
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

void art()
{
    cout << "______  ___              _____           ___       ______                    _________       " << endl;
    cout << "___   |/  /_____ _______ ___(_)______    __ |     / /__(_)___________ _____________  /_______" << endl;
    cout << "__  /|_/ /_  __ `/_  __ `/_  /_  ___/    __ | /| / /__  /___  /_  __ `/_  ___/  __  /__  ___/" << endl;
    cout << "_  /  / / / /_/ /_  /_/ /_  / / /__      __ |/ |/ / _  / __  /_/ /_/ /_  /   / /_/ / _(__  ) " << endl;
    cout << "/_/  /_/  L__,_/ _\__, / /_/  L___/      ____/|__/  /_/  _____/L__,_/ /_/    L__,_/  /____/  " << endl;
    cout << "                 /____/                                                                      " << endl;
    cout << endl;
    cout << endl;
    cout << "                              Welcome " << playerName << "!";
}
