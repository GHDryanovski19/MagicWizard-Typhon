#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

string playerName;

void introduction()
{
                                        
    cout << "                    &&" << endl;
    cout << "                   %  %" << endl;
    cout << "                  %    %" << endl;
    cout << "                 %   %%%%" << endl;
    cout << "                %#&%%%   %" << endl;
    cout << "              %    %& %*(&" << endl;
    cout << "              %  *   &&    *" << endl;
    cout << "             %  &.##//   %#&." << endl;
    cout << "            % .%/  .%( %#   %" << endl;
    cout << "        .%(&  &%%(%*&     & %& %/%." << endl;
    cout << "       %  #*  #&&%%&%%%&%&#   %. #/" << endl;
    cout << "     %*%#    ,%  ,%   % *%   /.%.%" << endl;
    cout << "     %  %         .%   #.      %  %" << endl;
    cout << "      (%           %   ,#       &." << endl;
    cout << "      % &,         %    %        %" << endl;
    cout << "     %  ,%/#       %    %    ./(%,#" << endl;
    cout << "    %      //      &   %  %%%#    .*" << endl;
    cout << "   %           %%%%#%%%.           &/" << endl;
    cout << "  &                                ,%" << endl;
    cout << "  %                 #%,          .  %" << endl;
    cout << "  %%%.                           *," << endl;
    cout << "     %                           * (" << endl;
    cout << "     %  .                         &" << endl;
    cout << "        %   /          &    %&..#%" << endl;
    cout << "            %    %    ,(%%%" << endl;
    cout << "              *    *. " << endl;
    cout << "==========================================" << endl;
    cout << "Hello, my name is Stringgar the Wizard." << endl;
    cout << "Today I'm going to teach you some things about strings." << endl;
    cout << "First, what is your name." << endl;
    cout << "My name is ";
    getline(cin, playerName);
    cout << "Okay, " << playerName << " let's start." << endl;
    cout << "==========================================" << endl;                         
}
int main()
{
    introduction();
}