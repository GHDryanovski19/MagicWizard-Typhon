#include "Common.h"
#include "Project.h"

#include <iostream>
#include <string>
#include <Windows.h>
#include <conio.h>

using namespace std;

string playerName;

string status = "No new messages";

int levelProgression;

void introduction()
{
    int Set[] = { 9 };

    color(Set[0]);
    cout << "                                     &&" << endl; Sleep(50);
    cout << "                                    %  %" << endl; Sleep(50);
    cout << "                                   %    %" << endl; Sleep(50);
    cout << "                                  %   %%%%" << endl; Sleep(50);
    cout << "                                 %#&%%%   %" << endl; Sleep(50);
    cout << "                               %    %& %*(&" << endl; Sleep(50);
    cout << "                               %  *   &&    *" << endl; Sleep(50);
    cout << "                              %  &.##//   %#&." << endl; Sleep(50);
    cout << "                             % .%/  .%( %#   %" << endl; Sleep(50);
    cout << "                         .%(&  &%%(%*&     & %& %/%." << endl; Sleep(50);
    cout << "                        %  #*  #&&%%&%%%&%&#   %. #/" << endl; Sleep(50);
    cout << "                      %*%#    ,%  ,%   % *%   /.%.%" << endl; Sleep(50);
    cout << "                      %  %         .%   #.      %  %" << endl; Sleep(50);
    cout << "                       (%           %   ,#       &." << endl; Sleep(50);
    cout << "                       % &,         %    %        %" << endl; Sleep(50);
    cout << "                      %  ,%/#       %    %    ./(%,#" << endl; Sleep(50);
    cout << "                     %      //      &   %  %%%#    .*" << endl; Sleep(50);
    cout << "                    %           %%%%#%%%.           &/" << endl; Sleep(50);
    cout << "                   &                                ,%" << endl; Sleep(50);
    cout << "                   %                 #%,          .  %" << endl; Sleep(50);
    cout << "                   %%%.                           *," << endl; Sleep(50);
    cout << "                      %                           * (" << endl; Sleep(50);
    cout << "                      %  .                         &" << endl; Sleep(50);
    cout << "                         %   /          &    %&..#%" << endl; Sleep(50);
    cout << "                             %    %    ,(%%%" << endl; Sleep(50);
    cout << "                               *    *. " << endl; Sleep(50);
    cout << endl; Sleep(1000);
    cout << "===========================================================================================" << endl;
    cout << endl;
    cout << "                  Hello, my name is Stringgar the Wizard." << endl; Sleep(2000);
    cout << "           Today I'm going to teach you some things about strings." << endl; Sleep(1000);
    cout << endl;
    cout << "===========================================================================================" << endl;
    cout << endl; Sleep(1000);
    cout << "                          First, what is your name." << endl;
    cout << "                                My name is ";
    getline(cin, playerName);
    cout << endl;
    cout << "                        Lets get you right into it!"; Sleep(1000);

    if (playerName == "admin")
    {
        levelProgression = 999;
    }

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
    int Set[] = {13};

    color(Set[0]);
    cout << "______  ___              _____           ___       ______                    _________       " << endl;
    cout << "___   |/  /_____ _______ ___(_)______    __ |     / /__(_)___________ _____________  /_______" << endl;
    cout << "__  /|_/ /_  __ `/_  __ `/_  /_  ___/    __ | /| / /__  /___  /_  __ `/_  ___/  __  /__  ___/" << endl;
    cout << "_  /  / / / /_/ /_  /_/ /_  / / /__      __ |/ |/ / _  / __  /_/ /_/ /_  /   / /_/ / _(__  ) " << endl;
    cout << "/_/  /_/  L__,_/ _\__, / /_/  L___/      ____/|__/  /_/  _____/L__,_/ /_/    L__,_/  /____/  " << endl;
    cout << "                 /____/                                                                      " << endl;
    cout << endl;
    cout << endl;
    cout << "                              Welcome " << playerName << "! " << status;

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

void ready()
{
    string playerState;

    cout << "Good job, let's countinue to the next level." << endl;
    cout << endl; Sleep(300);
    cout << "Type 'ready' to continue: ";
    cin >> playerState;

    if (playerState == "ready")
    {
        if (levelProgression < 1)
        {
            levelProgression = levelProgression + 1;
            status = "New level unlocked!";
        }
        system("CLS");
        mainMenu();
    }
    else
    {
        ready();
    }
}

void locked()
{
    int Set[] = { 12 };

    color(Set[0]);
    cout << "===============================================================================" << endl;
    cout << "ooooo          .oooooo.     .oooooo.   oooo    oooo oooooooooooo oooooooooo.   " << endl;
    cout << "`888'         d8P'  `Y8b   d8P'  `Y8b  `888   .8P'  `888'     `8 `888'   `Y8b  " << endl;
    cout << " 888         888      888 888           888  d8'     888          888      888 " << endl;
    cout << " 888         888      888 888           88888[       888oooo8     888      888 " << endl;
    cout << " 888         888      888 888           888`88b.     888          888      888 " << endl;
    cout << " 888       o `88b    d88' `88b    ooo   888  `88b.   888       o  888     d88' " << endl;
    cout << "o888ooooood8  `Y8bood8P'   `Y8bood8P'  o888o  o888o o888ooooood8 o888bood8P'   " << endl;
    cout << "===============================================================================" << endl;

    Sleep(2000);
    system("CLS");
    levelMenuSelector();
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
    cout << endl; Sleep(1000);
    cout << "Stringgar:" << endl;
    cout << endl;
    cout << "=====================================================================" << endl; Sleep(1000);
    cout << "Okay, " << playerName << " let's start." << endl; Sleep(300);
    cout << "Strings are objects that represent sequences of characters." << endl; Sleep(300);
    cout << "The standard string class provides support for such objects with an interface similar to that of a standard container of bytes," << endl; Sleep(300);
    cout << "but adding features specifically designed to operate with strings of single-byte characters." << endl; Sleep(300);
    cout << "To be able to use anything related to strings, you have to include the string library. You can do that, by typing #include<string> above using namespace std;" << endl; Sleep(300);
    cout << "To declare a string you basically have to type string and the name of your variable." << endl; Sleep(300);
    cout << "And to initalize it, you have to type getline(cin, the name of the string). Okay let's try it." << endl; Sleep(300);
    cout << "=====================================================================" << endl; Sleep(1000);
    cout << playerName << ":" << endl;

    getline(cin, str);

    cout << "Stringgar:" << endl;
    cout << "=====================================================================" << endl;

    if (isNumber(str) == 0 && str.find("string") != string::npos && str.find(';') != string::npos)
    {
        ready();
    }
    else
    {
        cout << "Try again!" << endl; Sleep(2000);
        system("CLS");
        level1();
    }

    cout << "=====================================================================" << endl;
}

void level2()
{
    if (levelProgression >= 1)
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
    else
    {
        locked();
    }
}

void level3()
{
    if (levelProgression >= 2)
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
        cout << "=====================================================================" << endl;
        cout << playerName << " you are doing pretty well!" << endl;
        cout << "This level is all about finding a string in another string. I don't think that it would be a challenge for you." << endl;
        cout << "Strings can do this for us.They can search for a substring or for a single character.For this purpose, we need to use one of the variants of" << endl;
        cout << "the find member function.Two of them are particularly useful : int where_it_begins = S.find(another_string, start_here); int where_it_is = S.find(any_character, start_here);" << endl;
        cout << "Your task is to initialize two strings and check if the second is a part of the first" << endl;
        cout << "=====================================================================" << endl;
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
    else
    {
        locked();
    }
}

void level4()
{
    if (levelProgression >= 3)
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
        cout << "=====================================================================" << endl;
        cout << playerName << " you learn stuff with amazing speed!" << endl;
        cout << "This level is about the length of a string." << endl;
        cout << "Every string has a length.Even an empty string(containing no characters at all)" << endl;
        cout << "has a length of zero.It's obvious that at some point we may want to know how long a particular string is." << endl;
        cout << "This information is provided by two twin member functions.Their names are different, but their behaviours are identical.We can say that these functions are synonyms." << endl;
        cout << "Their informal prototypes look like these:" << endl;
        cout << "int string_size = S.size();" << endl;
        cout << "int string_length = S.length();" << endl;

        cout << "=====================================================================" << endl;
    }
    else
    {
        locked();
    }
}

void level5()
{
    if (levelProgression >= 4)
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
        cout << "=====================================================================" << endl;
        cout << "Wow " << playerName << " you're learning pretty fast. Amazing job!" << endl;
        cout << "This level is about string::npos. I think it will be a piece of cake, so let't start." << endl;
        cout << "String::npos is the maximum value for size_t" << endl;
        cout << "npos is a static member constant value with the greatest possible value for an element of type size_t." << endl;
        cout << "This value, when used as the value for a len(or sublen) parameter in string's member functions, means until the end of the string." << endl;
        cout << "As a return value, it is usually used to indicate no matches." << endl;
        cout << "This constant is defined with a value of - 1, which because size_t is an unsigned integral type, it is the largest possible representable value for this type." << endl;
        cout << "=====================================================================" << endl;
    }
    else
    {
        locked();
    }
}

void winMessage()
{
    int Set[] = { 14 };

    color(Set[0]);
    cout << " ___    _____  _   _  ___    ___    _____  _____  _   _  _      _____  _____  _  _____  _   _  ___   " << endl; Sleep(100);
    cout << "(  _`L (  _  )( ) ( )(  _`L |  _`L (  _  )(_   _)( ) ( )( )    (  _  )(_   _)(_)(  _  )( ) ( )(  _`L " << endl; Sleep(100);
    cout << "| ( (_)| ( ) || `L| || ( (_)| (_) )| (_) |  | |  | | | || |    | (_) |  | |  | || ( ) || `L| || (_(_)" << endl; Sleep(100);
    cout << "| |  _ | | | || , ` || |___ | ,  / |  _  |  | |  | | | || |  _ |  _  |  | |  | || | | || , ` |`L__ L " << endl; Sleep(100);
    cout << "| (_( )| (_) || |`L || (_, )| |L L | | | |  | |  | (_) || |_( )| | | |  | |  | || (_) || |`L |( )_) |" << endl; Sleep(100);
    cout << "(____/'(_____)(_) (_)(____/'(_) (_)(_) (_)  (_)  (_____)(____/'(_) (_)  (_)  (_)(_____)(_) (_)`L____)" << endl; Sleep(100);


}

void credits()
{
    if (levelProgression >= 5)
    {
        int Set[] = { 10 };

        string magicWord;
        color(Set[0]);
        cout << "Enter the Magic Word in camel keys: ";
        cin >> magicWord;


        if (magicWord.find("theMagicIsEverywhere") != string::npos)
        {
            system("CLS");
            winMessage(); Sleep(5000);

            Set[0] = 15;

            color(Set[0]);
            cout << "	    ___    ___    ___    ___    _  _____  ___   " << endl;
            cout << "	   (  _`\ |  _`\ (  _`\ (  _`\ (_)(_   _)(  _`\ " << endl;
            cout << "	   | ( (_)| (_) )| (_(_)| | ) || |  | |  | (_(_)" << endl;
            cout << "	   | |  _ | ,  / |  _)_ | | | )| |  | |  `\__ \ " << endl;
            cout << "	   | (_( )| |\ \ | (_( )| |_) || |  | |  ( )_) |" << endl;
            cout << "	   (____/'(_) (_)(____/'(____/'(_)  (_)  `\____)" << endl; Sleep(1000);

            cout << "===================================================================" << endl;
            cout << "===================================================================" << endl; Sleep(900);


            cout << "     PRODUCTION COMPANY presents  Stringgar STUDIO " << endl; Sleep(900);
            cout << " a PRODUCTION COMPANY production  Stringgar " << endl; Sleep(900);
            cout << "		a FILMMAKER film  Stringgar " << endl; Sleep(900);
            cout << "		      Film Title  Magic Wizards " << endl; Sleep(900);
            cout << "		       Lead Cast  Stringgar " << endl; Sleep(900);
            cout << "	         Supporting Cast  Stringgar " << endl; Sleep(900);
            cout << " 		Casting Director  Stringgar " << endl; Sleep(900);
            cout << " 		  Music Composer  Stringgar " << endl; Sleep(900);
            cout << " 		Costume Designer  Stringgar " << endl; Sleep(900);
            cout << "	     Associate Producers  Stringgar " << endl; Sleep(900);
            cout << " 			 Editors  Stringgar " << endl; Sleep(900);
            cout << "	     Production Designer  Stringgar " << endl; Sleep(900);
            cout << "	 Director of Photography  Stringgar " << endl; Sleep(900);
            cout << "	      Executive Producer  Stringgar " << endl; Sleep(900);
            cout << "			Producer  Stringgar " << endl; Sleep(900);
            cout << "			 Writers  Stringgar " << endl; Sleep(900);
            cout << "			Director  Stringgar " << endl; Sleep(900);
            cout << endl; Sleep(500);
            cout << "		  The ones that delivered the snacks " << endl;
            cout << endl; Sleep(500);
            cout << "	       Georgi Dryanovski - Scrum Trainer " << endl; Sleep(1000);
            cout << "		   Ivan Mihaylov - Back-End Developer " << endl; Sleep(1000);
            cout << "		    Viktor Kirov - Front-End Developer " << endl; Sleep(1000);
            cout << "	      Maksimiliyan Dimov - Quality Engineer " << endl; Sleep(1000);
            cout << "		Dimitur Dimitrov - Code Check " << endl; Sleep(1000);
            cout << endl; Sleep(500);
            cout << "				End " << endl;
        }
        else
        {
            locked();
        }
    }
    else
    {
        locked();
    }
}

