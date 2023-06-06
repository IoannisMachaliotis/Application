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

void displayWords(std::vector<std::string> &words)
{
    std::cout << "\n---------- List of words: ----------\n";
    for (const std::string& word : words)
    {
        std::cout << word << "\n";
    }
}

void removeDuplicates(std::vector<std::string>& words)
{
    std::unordered_set<std::string> uniqueWords(words.begin(), words.end());
    words.assign(uniqueWords.begin(), uniqueWords.end());
}

void saveWords(const std::vector<std::string>& words, const std::string& filename)
{
    std::ofstream outputFile(filename);
    if (outputFile.is_open()) {
        for (const auto& word : words) {
            outputFile << word << "\n";
        }
        outputFile.close();
        std::cout << "Result saved to " << filename << "\n";
    } else {
        std::cout << "Unable to open file for writing.\n";
    }
}

} // library
