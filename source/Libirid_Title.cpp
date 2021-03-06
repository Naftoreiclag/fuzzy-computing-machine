/* Copyright (c) 2013 "Naftoreiclag" https://github.com/Naftoreiclag
 *
 * Distributed under the MIT License (http://opensource.org/licenses/mit-license.html)
 * See accompanying file LICENSE
 */

#include "Libirid_Title.h"

#include <iostream>

void Title::printPrettyScreen(std::string centerifier, char solid)
{
    // Some space
    std::cout << std::endl;

    // The logo
    std::string logo[9] =
    {
        "100000000100000000000000000000001",
        "100000000100000000000000000000001",
        "100000100100000010000000001000001",
        "100000000100000000000000000000001",
        "100011100111001110010110111000111",
        "100000100100100010011000001001001",
        "100000100100100010010000001001001",
        "100000100100100010010000001001001",
        "111100100111000010010000001000111"
    };

    // For every line
    for(int i = 0; i < 9; ++ i)
    {
        // Some space
        std::cout << centerifier;

        // For every char
        for(int j = 0; j < 33; ++ j)
        {
            // If its one
            if(logo[i].at(j) == '1')
            {
                // Print solid
                std::cout << solid;
            }

            // If its zero
            else
            {
                // Print blank
                std::cout << ' ';
            }
        }

        // Make space for next line
        std::cout << std::endl;
    }

    // Some space
    std::cout << std::endl;

    // Version number
    std::cout << centerifier << "Version 0.0.0.1   By Naftoreiclag" << std::endl;

    // Some space
    std::cout << std::endl;

    // Some more space
    std::cout << std::endl;

    // Display options
    std::cout << centerifier << "1. Return to Game" << std::endl;
    std::cout << std::endl;
    std::cout << centerifier << "2. Player Creation" << std::endl;
    std::cout << centerifier << "3. Join Game" << std::endl;
    std::cout << centerifier << "4. Adjust Settings" << std::endl;
    std::cout << centerifier << "5. Exit Program" << std::endl;

    // Some space
    std::cout << std::endl;
}

void Title::getInformativeMessageBasedOnFailNumber(int numFails)
{
    if(numFails == 0)
    {
        std::cout << "Type a selection." << std::endl;
    }
    else if(numFails == 1)
    {
        std::cout << "Please type a selection." << std::endl;
    }
    else if(numFails == 2 || numFails == 3)
    {
        std::cout << "Examples of a good selection:" << std::endl;
        std::cout << "1, 2, 3..." << std::endl;
    }
    else if(numFails == 4)
    {
        std::cout << "This game is more than typing random inputs." << std::endl;
        std::cout << "Okay, maybe it is..." << std::endl;
    }
    else if(numFails == 5)
    {
        std::cout << "Is your keyboard broken?" << std::endl;
    }
    else if(numFails == 6)
    {
        std::cout << "Hello? You might want to report this as a " << std::endl;
        std::cout << "bug in the program, if you really are " << std::endl;
        std::cout << "typing correct inputs." << std::endl;
    }
    else if(numFails == 20)
    {
        std::cout << "At this point, the developers of this game" << std::endl;
        std::cout << "are assuming that you are just holding down" << std::endl;
        std::cout << "the button for the lols." << std::endl;
    }
    else if(numFails == 50)
    {
        std::cout << "Please uninstall the game." << std::endl;
    }
    else if(numFails == 100)
    {
        std::cout << "One hundred CPU cycles... wasted." << std::endl;
    }
    else if(numFails == 300)
    {
        std::cout << "I hope you realize that this game is more" << std::endl;
        std::cout << "Than just holding down \"Enter,\" right?" << std::endl;
    }
    else if(numFails == 1000)
    {
        std::cout << "Achievement get! Waste your time and mine!" << std::endl;
    }
    else if(numFails == 5000)
    {
        std::cout << "< " << std::endl;
    }
    else if(numFails == 9001)
    {
        std::cout << "Old meme from 2007!" << std::endl;
    }
    else
    {
    }
}

int Title::run()
{
    // Print pretty prompt
    printPrettyScreen("  ", 219);

    // What choice they make
    int choice = 0;

    // Number of fails
    int numFails = 0;

    // So long as they have no choice
    while(choice == 0)
    {
        // Print little triangle thing
        std::cout << "> ";

        // Extract line
        std::string line;
        std::getline(std::cin, line);

        // If they just press enter
        if(line.length() == 0)
        {
            // There is no need to do anything
            choice = 0;
        }

        // Potentially good input
        else
        {
            if(line == "1")
            {
                choice = 1;
            }
            else if(line == "2")
            {
                choice = 2;
            }
            else if(line == "3")
            {
                choice = 3;
            }
            else if(line == "4")
            {
                choice = 4;
            }
            else if(line == "5")
            {
                choice = 5;
            }
        }

        // If they failed
        if(choice == 0)
        {
            // Tell them how to improve themselves
            getInformativeMessageBasedOnFailNumber(numFails);

            // Increment
            ++ numFails;
        }
    }

    // Return their choice
    return choice;
}
