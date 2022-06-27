// WritingAnUnknownNumberOfRows.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main()
{
    //Ask for the person's name
    std::cout << "Please enter your first name: ";

    //Read the name
    std::string name;
    std::cin >> name;
    
    //Build the message that we intent to write
    const std::string greeting = "Hello, " + name + "!";

    // the number of blanks surrounding the greeting
    const int pad = 1;

    //total number of rows to write
    const int rows = pad * 2 + 3;

    //seperate output from the input
    std::cout << std::endl;

    //write "rows" rows of output
    int r = 0;

    // invarient: we have written r rows so far
    while (r != rows) {
        //write a row of output
        std::cout << std::endl;
        ++r;
    }



    
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu