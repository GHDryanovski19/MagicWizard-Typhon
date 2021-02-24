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

// ------------------------------- Main Menu ------------------------------- //

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
    system("CLS");
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
    cout << "Okay, " << playerName << " let's start." << endl;
    cout << "Strings are objects that represent sequences of characters." << endl;
    cout << "The standard string class provides support for such objects with an interface similar to that of a standard container of bytes," << endl;
    cout << "but adding features specifically designed to operate with strings of single-byte characters." << endl;
    cout << "To be able to use anything related to strings, you have to include the string library. You can do that, by typing #include<string> above using namespace std;" << endl;
    cout << "To declare a string you basically have to type string and the name of your variable." << endl;
    cout << "And to initalize it, you have to type getline(cin, the name of the string). Okay let's try it." << endl;
    cout << "=====================================================================" << endl;
    cout << playerName << ":" << endl;
    getline(cin, str);
    cout << "Stringgar:" << endl;
    cout << "=====================================================================" << endl;
    if (isNumber(str) == 0)
    {
        cout << "Good job, let's countinue to the next level." << endl;
        system("CLS");
    }
    else
    {
        cout << "Try again!" << endl;
    }
    cout << "=====================================================================" << endl;
}

void level2()
{
    system("CLS");
    string str1;
    string str2;
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
    cout << "=====================================================================" << endl;
    cout << "Okay, " << playerName << " let's continue with your journey." << endl;
    cout << "Since you already know the basics of strings, we can start with some more advanced stuff." << endl;
    cout << "This level is about comparing strings." << endl;
    cout << "You can compare strings by using the basic comparing operators > < >= <= !=. But we are magicians, right!" << endl;
    cout << "We are going to use a method(member function)." << endl;
    cout << "If we want a particular method (member function) to process data embedded within an object, we activate the member function for the object." << endl;
    cout << "It looks like this: object.member_function();" << endl;
    cout << "We compare strings by using the function .compare()." << endl;
    cout << "For an example we've initialized a string named str1 and we want to compare it with a string named str2" << endl;
    cout << "str1.compare(str2) == 0       when str1 == str2" << endl;
    cout << "str1.compare(str2) > 0        when str1 > str2" << endl;
    cout << "str1.compare(str2) < 0        when str1 < str2" << endl;
    cout << "I want you to initialize two strings and you'll compare them." << endl;
    cout << "=====================================================================" << endl;
    cout << playerName << ":" << endl;
    getline(cin, str1);
    getline(cin, str2);
    if (str1.compare(str2) == 0)
    {
        cout << str1 << " (str1) == " << str2 << " (str2)" << endl;
    }
    else if (str1.compare(str2) > 0)
    {
        cout << str1 << " (str1) > " << str2 << " (str2)" << endl;
    }
    else
    {
        cout << str1 << " (str1) < " << str2 << " (str2)" << endl;
    }
}

void level3()
{
    system("CLS");
    string str1;
    string str2;
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
    cout << playerName << " you are doing pretty well!" << endl;
    cout << "This level is all about finding a string in another string. I don't think that it would be a challenge for you." << endl;
    cout << "Strings can do this for us.They can search for a substring or for a single character.For this purpose, we need to use one of the variants of" << endl;
    cout << "the find member function.Two of them are particularly useful : int where_it_begins = S.find(another_string, start_here); int where_it_is = S.find(any_character, start_here);" << endl;
    cout << "Your task is to initialize two strings and check if the second is a part of the first" << endl;
    cout << "    =====================================================================" << endl;
    cout << playerName << ":" << endl;
    getline(cin, str1);
    getline(cin, str2);
    if (str1.find(str2) != string::npos)
    {
        cout << "Good job, let's countinue to the next level." << endl;
        system("CLS");
    }
    else
    {
        cout << "Try again!" << endl;
    }
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

