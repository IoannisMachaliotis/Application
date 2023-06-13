/* This is an Application Requested from ALTEN SA 
    on behalf of a client in Montpellier 
    @author IoannisMachaliotis
*/
#pragma once

// STL
#include <iostream>
#include <fstream>
#include <unordered_set>
#include <vector>

// others
#include <algorithm>

namespace library
{

void displayWords(std::vector<std::string> &iWords)
{
    std::cout << "\n---------- List of words: ----------\n";
    for (const std::string& aWord : iWords)
    {
        std::cout << aWord << "\n";
    }
}

void removeDuplicates(std::vector<std::string>& iWords)
{
    std::unordered_set<std::string> uniqueWords(iWords.begin(), iWords.end());
    iWords.assign(uniqueWords.begin(), uniqueWords.end());
}

void saveWords(const std::vector<std::string>& iWords, const std::string& iFilename)
{
    std::ofstream aOutputFile(iFilename);
    if (aOutputFile.is_open()) {
        for (const std::string& aWord : iWords) {
            aOutputFile << aWord << "\n";
        }
        aOutputFile.close();
        std::cout << "Result saved to " << iFilename << "\n";

        std::string aOpenOption;
        while (true)
        {
            std::cout << "Do you want to open the file? ('y' for yes or 'n' for no): ";
            std::cin >> aOpenOption;

            if (aOpenOption == "y")
            {
                std::string aOpenCommand = "open " + iFilename; // Adjust command for Windows or Linux
                std::system(aOpenCommand.c_str());
                break;
            }
            else if (aOpenOption == "n")
            {
                break;
            }

            std::cout << "Invalid option. Please choose either 'y' or 'n'.\n";
        }
    } else {
        std::cout << "Unable to open file for writing.\n";
    }

}

} // library
