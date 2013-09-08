#include <iostream>
#include <sstream>
#include <string>
#include <vector>

#include "Command.h"

void getInput(std::vector<std::string>* v)
{
    // Clear out the vector
    v->clear();

    // Extract a buffer for the input
    std::string line;
    std::getline(std::cin, line);
    std::stringstream sBuffer(line);

    // Get words
    std::string word;
    while(sBuffer >> word)
    {
        v->push_back(word);
    }
}

void printVec(std::vector<std::string>* v)
{
    for(std::vector<std::string>::iterator it = v->begin(); it != v->end(); ++ it)
    {
        std::cout << *it << std::endl;
    }
}

class CmdEat: public Command
{
    public:
        unsigned int execute(std::vector<std::string>* v)
        {
            if(v->size() < 2)
            {
                std::cout << "You ate nothing!" << std::endl;

                return 0;
            }
            std::cout << "You munched on a " << v->at(1) << std::endl;

            return 100;
        }
};

class CmdErroneous: public Command
{
    public:
        unsigned int execute(std::vector<std::string>* v)
        {
            std::cout << "This is an erroneous statement!" << std::endl;

            return 666;
        }
};

int main()
{
    //CommandFunction cf = new

    // Commands
    (new CmdErroneous())->setErroneous();
    (new CmdEat())->addAlias(0, "eat");

    std::cout << "Fuzzy Computing Machine" << std::endl;

    bool running = true;

    std::vector<std::string>* v = new std::vector<std::string>();

    while(running)
    {
        std::cout << "Enter something:" << std::endl;
        std::cout << "FCM:\\>";
        getInput(v);
        std::cout << std::endl;
        std::cout << "You entered:" << std::endl;
        printVec(v);
        std::cout << std::endl;
        std::cout << "Trying to recognize command..." << std::endl;

        Command* theCmd = Command::getCommand(v->at(0));

        if(theCmd == Command::erroneous())
        {
            std::cout << "Failed!" << std::endl;
        }
        else
        {
            std::cout << "Command recognized!" << std::endl;

            theCmd->execute(v);
        }

        std::cout << std::endl;
    }

    return 0;
}
