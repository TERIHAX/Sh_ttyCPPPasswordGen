// Sh_ttyPasswordGen.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <Windows.h>
#include <time.h>

using std::cout;
using std::cin;
using std::string;

int main()
{
    // uh this only works in windows i think idfk how to do for mac or linux
    SetConsoleTitleA("Sh*tty Password Gen in c++");

    string charSet = "abcdefghijklmnopqrstuvwxyz";
    int passLength;
    int uppercase = 1;
    int numbers = 1;
    int symbols = 1;

    cout << "sh*tty password gen made in c++\n\nhow many characters do you want the password to be:\n";
    cin >> passLength;

    cout << "\nuppercase characters?\n0: no\n1: uh yes\n";
    cin >> uppercase;

    cout << "\nnumbers?\n0: uh no\n1: yes\n";
    cin >> numbers;

    cout << "\nsymbols?\n0: uh no\n1: yes\n";
    cin >> symbols;

    cout << "\nresults:\n";
    if (uppercase >= 1) {
        charSet += "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

        cout << "uppercase letters: uh yes\n";
    }

    if (numbers >= 1) {
        charSet += "0123456789";

        cout << "numbers: uh yes\n";
    }

    if (symbols >= 1) {
        charSet += "~!@#$%^&*()-=_+`|\\[]{}:\"'<>,.?/";

        cout << "symbols: yes i think\n\ngenerated password:\n";
    }

    srand(time(nullptr));

    string password;
    auto charSetLength = (int)charSet.length();
    for (int i = 0; i < passLength; i++) {
        // uh apparently rand() has limited randomness idfk what that means
        password += charSet[rand() % charSetLength];
    }

    cout << password << "\n\n----------\n\nPress ctrl + c or any key along with enter to exit";

    float disposeVar;
    cin >> disposeVar;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
