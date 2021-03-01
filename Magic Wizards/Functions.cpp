#include "Common.h"
#include "Project.h"

#include <iostream>
#include <string>
#include <Windows.h>
#include <conio.h>

using namespace std;

string playerName;

string status = "No new messages";

int levelProgression = 0;

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

    if (playerName == "Stringgar")
    {
        cout << "                    What a beautiful name let me get you started!"; Sleep(1000);
        levelProgression = 999;
    }
    else
    {
        cout << "                        Lets get you right into it!"; Sleep(1000);
    }

    system("CLS");
}

// ------------------------------- Main Menu ------------------------------- //

void color(int color)
{
    if(STD_OUTPUT_HANDLE)
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
    }
    else
    { }
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

// ---------------------------- Level Functions ---------------------------- //

//Checks if a variable is an integer or string
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

// ---------------------------- Level Functions ---------------------------- //

// -------------------------------- Levels --------------------------------- //

void startKeyFunction()
{
    int Set[] = { 11, 11, 11, 11 };

    color(Set[0]);
    cout << "Press 'Enter' to start the level or 'Backspace' to go back." << endl;

    char startKey;
    startKey = _getch();  

    if (startKey == '\r')
    {
        color(Set[1]);
        cout << "Starting . . ."; Sleep(1000);
        system("CLS");
    }
    else if (startKey == '\b')
    {
        color(Set[2]);
        cout << "Going back . . ."; Sleep(1000);
        system("CLS");
        levelMenuSelector();
    }
    else
    {
        color(Set[3]);
        cout << "Invalid key pressed please try again!"; Sleep(500);
        system("CLS");
        startKeyFunction();
    }
}

void level1()
{
    system("CLS");
    string str;
    startKeyFunction();
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
        if (levelProgression < 1)
        {
            levelProgression = levelProgression + 1;
            status = "Level 2 Unlocked!";
        }
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
        string answer;
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
        cout << "=====================================================================" << endl; Sleep(1000);
        cout << "Okay, " << playerName << " let's continue with your journey." << endl;
        cout << "Since you already know the basics of strings, we can start with some more advanced stuff." << endl; Sleep(1000);
        cout << "This level is about the function insert()" << endl; Sleep(300);
        cout << "This function is used to insert a new character, before the character indicated by the position pos." << endl; Sleep(1000);
        cout << "Syntax:" << endl; Sleep(700);
        cout << "Consider two strings str1and str2, pos is the positon.Syntax would be :" << endl; Sleep(1000);
        cout << "str1.insert(pos, str2);" << endl; Sleep(300);
        cout << "Parameters:" << endl; Sleep(300);
        cout << "str : String object to be inserted in another string object." << endl; Sleep(500);
        cout << "pos : It defines the position at which new content is inserted just before the specified position." << endl; Sleep(700);
        cout << "Your task is to write the syntax of a member function that will insert the word magic after the 3rd index of a word" << endl; Sleep(700);
        cout << "=====================================================================" << endl; Sleep(1000);
        cout << playerName << ":" << endl;
        getline(cin, answer);
        if (isNumber(answer) == 0 && answer.find(';') != string::npos && answer.find(".insert(3, \"magic\")") != string::npos)
        {
            if (levelProgression < 2)
            {
                levelProgression = levelProgression + 1;
                status = "Level 3 Unlocked!";
            }
            ready();
        }
        else
        {
            cout << "Try again!" << endl; Sleep(2000);
            system("CLS");
            level2();
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
        cout << "=====================================================================" << endl; Sleep(1000);
        cout << playerName << " you are doing pretty well!" << endl;
        cout << "This level's topic is about the function swap()." << endl; Sleep(900);
        cout << "Exchanges the content of the container by the content of str, which is another string object.Lengths may differ." << endl; Sleep(1000);
        cout << "After the call to this member function, the value of this object is the value str had before the call, and the value of str" << endl; Sleep(1000);
        cout << "is the value this object had before the call." << endl; Sleep(800);
        cout << "Notice that a non - member function exists with the same name, swap, overloading that algorithm with an optimization that behaves like this member function." << endl; Sleep(1000);
        cout << "Your task is to write the syntax of a member function that will swap two strings" << endl; Sleep(1000);
        cout << "IMPORTANT! The first string goes by the name str1 and the second goes by str2" << endl; Sleep(1000);
        cout << "=====================================================================" << endl; Sleep(1000);
        cout << playerName << ":" << endl;
        getline(cin, str1);
        if (isNumber(str1) == 0 && str1.find(';') != string::npos && str1.find(".swap(str1, str2)") != string::npos)
        {
            if (levelProgression < 3)
            {
                levelProgression = levelProgression + 1;
                status = "Level 4 Unlocked!";
            }
            ready();
        }
        else
        {
            cout << "Try again!" << endl; Sleep(2000);
            system("CLS");
            level3();
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
        system("CLS");
        string guess;
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
        cout << "=====================================================================" << endl; Sleep(1000);
        cout << playerName << " you learn stuff with amazing speed!" << endl; Sleep(800);
        cout << "This level is about the length of a string." << endl; Sleep(800);
        cout << "Every string has a length.Even an empty string(containing no characters at all)" << endl;
        cout << "has a length of zero.It's obvious that at some point we may want to know how long a particular string is." << endl; Sleep(900);
        cout << "This information is provided by two twin member functions.Their names are different, but their behaviours are identical.We can say that these functions are synonyms." << endl; Sleep(1500);
        cout << "Their informal prototypes look like these:" << endl; Sleep(800);
        cout << "int string_size = S.size();" << endl; Sleep(800);
        cout << "int string_length = S.length();" << endl; Sleep(800);
        cout << "To continue to the next level, you'll have to type the syntax of the member function .size()" << endl; Sleep(1000);
        cout << "=====================================================================" << endl; Sleep(1000);
        cout << playerName << ":" << endl;
        getline(cin, guess);
        if (isNumber(guess) == 0 && guess.find(';') != string::npos && guess.find(".size()") != string::npos)
        {
            if (levelProgression < 4)
            {
                levelProgression = levelProgression + 1;
                status = "Level 5 Unlocked";
            }
            ready();
        }
        else
        {
            cout << "Try again!" << endl; Sleep(2000);
            system("CLS");
            level4();
        }
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
        system("CLS");
        string ans;
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
        cout << "=====================================================================" << endl; Sleep(1000);
        cout << "Wow " << playerName << " you're learning pretty fast. Amazing job!" << endl; Sleep(1000);
        cout << "This level is about string::npos. I think it will be a piece of cake, so let't start." << endl; Sleep(1000);
        cout << "String::npos is the maximum value for size_t" << endl; Sleep(1000);
        cout << "npos is a static member constant value with the greatest possible value for an element of type size_t." << endl; Sleep(1000);
        cout << "This value, when used as the value for a len(or sublen) parameter in string's member functions, means until the end of the string." << endl; Sleep(1000);
        cout << "As a return value, it is usually used to indicate no matches." << endl; Sleep(1000);
        cout << "This constant is defined with a value of - 1, which because size_t is an unsigned integral type, it is the largest possible representable value for this type." << endl; Sleep(1300);
        cout << "To continue to your last task you'll just have to type the maximum value for size_t" << endl; Sleep(1000);
        cout << "=====================================================================" << endl; Sleep(1000);
        cout << playerName << ":" << endl;
        getline(cin, ans);
        if (ans.find(';') != string::npos && ans.find("string") != string::npos && ans.find("::npos") != string::npos)
        {
            if (levelProgression < 5)
            {
                levelProgression = levelProgression + 1;
                status = "Mystery Level Unlocked";
            }
            ready();
        }
        else
        {
            cout << "Try again!" << endl; Sleep(2000);
            system("CLS");
            level5();
        }
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
        cout << playerName << " you are given a power string. Your task is to append the reversed version of the string." << endl;
        cout << "There is something else you will need to do too: You need to insert the message ' cigaM ehT' at the end of the string before you reverse it!" << endl;
        cout << "When you've accomplised that type 'erehwyreve si' as your input and with the output you will be able to unlock the mystery level." << endl;
        cout << "Keep in mind that the key to the level must be in camel keys which means for example:" << endl;
        cout << "Stringgar likes to eat pankakes. " << "should be" << "stringgarLikesToEatPankakes." << endl;
        cout << endl;
        cout << "Enter the Magic Word in camel keys: ";
        cin >> magicWord;


        if (magicWord.find("theMagicIsEverywhere") != string::npos)
        {
            system("CLS");
            winMessage(); Sleep(5000);

            Set[0] = 15;

            color(Set[0]);
            cout << "	    ___    ___    ___    ___    _  _____  ___   " << endl;
            cout << "	   (  _`L |  _`L (  _`L (  _`L (_)(_   _)(  _`L " << endl;
            cout << "	   | ( (_)| (_) )| (_(_)| | ) || |  | |  | (_(_)" << endl;
            cout << "	   | |  _ | ,  / |  _)_ | | | )| |  | |  `L__ L " << endl;
            cout << "	   | (_( )| |L L | (_( )| |_) || |  | |  ( )_) |" << endl;
            cout << "	   (____/'(_) (_)(____/'(____/'(_)  (_)  `L____)" << endl; Sleep(1000);

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
            cout << "				End " << endl; Sleep(3000);

            system("CLS");
            status = "Congratulations you've completed every level!";
            mainMenu();
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

// -------------------------------- Levels --------------------------------- //
