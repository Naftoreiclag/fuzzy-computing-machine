/* Copyright (c) 2013 "Naftoreiclag" https://github.com/Naftoreiclag
 *
 * Distributed under the MIT License (http://opensource.org/licenses/mit-license.html)
 * See accompanying file LICENSE
 */

#include "Sysin.h"

#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <vector>

void Sysin::splitWords(std::string rawInput, std::vector<std::string>* wordContainer)
{
    // Clear
    wordContainer->clear();

    // Split
    std::stringstream sBuffer(rawInput);
    std::string word;
    while(sBuffer >> word)
    {
        wordContainer->push_back(word);
    }
}

/*
std::vector<std::string>* Sysin::splitWords(std::string rawInput)
{
    // New
    std::vector<std::string>* wordContainer = new std::vector<std::string>();

    // Split
    std::stringstream sBuffer(rawInput);
    std::string word;
    while(sBuffer >> word)
    {
        wordContainer->push_back(word);
    }

    return wordContainer;
}
*/

void Sysin::getWords(std::vector<std::string>* wordList)
{
    // Clear out the vector
    wordList->clear();

    // Extract a buffer for the input
    std::string line;
    std::getline(std::cin, line);
    std::stringstream sBuffer(line);

    // Get words
    std::string word;
    while(sBuffer >> word)
    {
        wordList->push_back(word);
    }
}

void Sysin::getWordsLowercase(std::vector<std::string>* wordList)
{
    // Clear out the vector
    wordList->clear();

    // Extract a buffer for the input
    std::string line;
    std::getline(std::cin, line);
    std::stringstream sBuffer(line);

    // Get words
    std::string word;
    while(sBuffer >> word)
    {
        std::transform(word.begin(), word.end(), word.begin(), ::tolower);
        wordList->push_back(word);
    }
}