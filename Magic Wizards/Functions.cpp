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

bool isNumber(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (isdigit(s[i]) == false)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}

bool isNumber(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (isdigit(s[i]) == false)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}

void level1()
{
    string str;
    cout << "         ,%                                                 %*               " << endl;
    cout << "        @@@                                               *@@,           ,@@@" << endl;
    cout << "       @@@.           (@@@@@    #@%     %@#    %@@@@%    .@@#        @@@@/@@/" << endl;
    cout << "      &@@,         @@@.   %@@*  @@&   *@@.  @@@    @@@   @@@            .@@# " << endl;
    cout << "     %@@(         @@@@@@@@@@@   @@& .@@,  .@@@@@@@@@@#  @@@             @@& " << endl;
    cout << "    /@@%         %@@      %(    @@@@@#    @@@     .%,  @@@             @@@ " << endl;
    cout << "    @@@@@@@@@@&   @@@@@@@@      #@@&       @@@@@@@%   %@@             @@@ " << endl;
    cout << endl;
    cout << endl;
    cout << "Stringgar:" << endl;
    cout << endl;
    cout << "=====================================================================" << endl;
    cout << "Okay, " << " let's start." << endl;
    cout << "Strings are objects that represent sequences of characters." << endl;
    cout << "The standard string class provides support for such objects with an interface similar to that of a standard container of bytes," << endl;
    cout << "but adding features specifically designed to operate with strings of single-byte characters." << endl;
    cout << "To be able to use anything related to strings, you have to include the string library. You can do that, by typing #include<string> above using namespace std;" << endl;
    cout << "To declare a string you basically have to type string and the name of your variable." << endl;
    cout << "And to initalize it, you have to type getline(cin, the name of the string). Okay let's try it." << endl;
    cout << "=====================================================================" << endl;
    cout << "Ivan:" << endl;
    getline(cin, str);
    cout << "Stringgar:" << endl;
    cout << "=====================================================================" << endl;
    if (isNumber(str) == 0)
    {
        cout << "Good job, let's countinue to the next level." << endl;
    }
    else
    {
        cout << "Try again!" << endl;
    }
    cout << "=====================================================================" << endl;
}

void level2()
{
    cout << "         ,%                                                 %*               ,@@@@@@@&" << endl;
    cout << "        @@@                                               *@@,              %@@.    @@@" << endl;
    cout << "       @@@.           (@@@@@    #@%     %@#    %@@@@%    .@@#                      @@@" << endl;
    cout << "      &@@,         @@@.   %@@*  @@&   *@@.  @@@    @@@   @@@                   /@@@( " << endl;
    cout << "     %@@(         @@@@@@@@@@@   @@& .@@,  .@@@@@@@@@@#  @@@                 @@@%  " << endl;
    cout << "    /@@%         %@@      %(    @@@@@#    @@@     .%,  @@@               @@@@######.   " << endl;
    cout << "    @@@@@@@@@@&   @@@@@@@@      #@@&       @@@@@@@%   %@@                *********," << endl;
    cout << endl;
    cout << endl;
    cout << "Stringgar:" << endl;
    cout << endl;
    cout << "    =====================================================================" << endl;
    cout << endl;
    cout << "    =====================================================================" << endl;
}

void level3()
{
    cout << "          ,%                                                   %*           .,." << endl;
    cout << "         @@@                                                 *@@,       .@@&. (@@@" << endl;
    cout << "        @@@.            (@@@@@    #@%     %@#    %@@@@%     .@@#        &,    (@@*" << endl;
    cout << "       &@@,          @@@.   %@@*  @@&   *@@.  @@@    @@@    @@@          &@@@@@" << endl;
    cout << "      %@@(          @@@@@@@@@@@   @@& .@@,  .@@@@@@@@@@#   @@@               @@@." << endl;
    cout << "     /@@%          %@@      %(    @@&@@&    @@@@@#        @@@         #@@     (@@/" << endl;
    cout << "     @@@@@@@@@@&    @@@@@@@@      #@@&       @@@@@@@%    %@@            @@@@@@@@" << endl;
    cout << endl;
    cout << endl;
    cout << "Stringgar:" << endl;
    cout << endl;
    cout << "    =====================================================================" << endl;
    cout << endl;
    cout << "    =====================================================================" << endl;
}

void level4()
{
    cout << "          ,%                                                   %*           .@@&" << endl;
    cout << "         @@@                                                 *@@,         @@@@@" << endl;
    cout << "        @@@.            (@@@@@    #@%     %@#    %@@@@%     .@@#        %@@ (@@" << endl;
    cout << "       &@@,          @@@.   %@@*  @@&   *@@.  @@@    @@@    @@@      (@@   ,@@," << endl;
    cout << "      %@@(          @@@@@@@@@@@   @@& .@@,  .@@@@@@@@@@#   @@@     @@@@@@@@@@@@&" << endl;
    cout << "     /@@%          %@@      %(    @@&@@&    @@@@@#        @@@            @@%" << endl;
    cout << "     @@@@@@@@@@&    @@@@@@@@      #@@&       @@@@@@@%    %@@            *@," << endl;
    cout << endl;
    cout << endl;
    cout << "Stringgar:" << endl;
    cout << endl;
    cout << "    =====================================================================" << endl;
    cout << endl;
    cout << "    =====================================================================" << endl;
}

void level5()
{
    cout << "         ,%                                                 %*               @@@@@@@@#" << endl;
    cout << "        @@@                                               *@@,             (@@" << endl;
    cout << "       @@@.           (@@@@@    #@%     %@#    %@@@@%    .@@#             @@@@@@@@&" << endl;
    cout << "      &@@,         @@@.   %@@*  @@&   *@@.  @@@    @@@   @@@            .        %@@. " << endl;
    cout << "     %@@(         @@@@@@@@@@@   @@& .@@,  .@@@@@@@@@@#  @@@             @@,    /@@," << endl;
    cout << "    /@@%         %@@      %(    @@@@@#    @@@     .%,  @@@             @@,    /@@," << endl;
    cout << "    @@@@@@@@@@&   @@@@@@@@      #@@&       @@@@@@@%   %@@               @@@@@@@@    " << endl;
    cout << endl;
    cout << endl;
    cout << "Stringgar:" << endl;
    cout << endl;
    cout << "    =====================================================================" << endl;
    cout << endl;
    cout << "    =====================================================================" << endl;
}

