#include "Sysout.h"

#include <iostream>
#include <string>

std::string Sysout::toFriendlyString(std::vector<std::string>* wordList)
{
    std::string returnVal = "[";

    if(wordList->size() == 0)
    {
        return returnVal + "]";
    }

    std::vector<std::string>::iterator it = wordList->begin();

    returnVal += *it;

    ++ it;

    while(it != wordList->end())
    {
        returnVal += ", " + *it;

        ++ it;
    }

    return returnVal + "]";
}

void Sysout::printSlow(std::string str)
{
    // This is pseudo code, since I am not in my IDE at the moment
    
    /*
    unsigned int index = 0;
    while(index < str.length())
    {
        // Print out one char
        std::cout << str.substring(index, index ++) << std::endl;
        
        // Wait for some amount of time
        System.wait(1000);
    }
    */
}

void Sysout::print(std::string str)
{
    std::cout << str;
}

void Sysout::println(std::string str)
{
    std::cout << str << std::endl;
}

void Sysout::print(std::vector<std::string>* wordList)
{
    std::cout << toFriendlyString(wordList);
}

void Sysout::println(std::vector<std::string>* wordList)
{
    std::cout << toFriendlyString(wordList) << std::endl;
}

void Sysout::println()
{
    std::cout << std::endl;
}

Sysout::Sysout() {}
