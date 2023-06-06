/* This is an Application Requested from ALTEN SA 
    on behalf of a client in Montpellier 
    @author IoannisMachaliotis
*/
#include "../include/Application.h"

// STL
#include <iostream>
#include <unordered_set>

// others
#include <algorithm>
#include "../library/library.h"

std::vector<std::string> Application::InputStage(std::vector<std::string> &words)
{
    std::cout << "Enter a list of words (press Enter after each word, type 'done' to finish):\n";
    
    std::string word;

    while (true)
    {
        std::cin >> word;
        
        if (word == "done")
        {
            break;
        }
        
        words.push_back(word);
    }

    return words;
}

std::vector<std::string> Application::SortingStage(std::vector<std::string> &words)
{
    std::string sortOption;
    while (true) {
        std::cout << "Type 'asc' for ascending or 'desc' descending order.\n";
        std::cin >> sortOption;

        if (sortOption == "asc" || sortOption == "desc") {
            break;
        }
        std::cout << "Invalid sort option. Please choose either 'asc' or 'desc'.\n";
    }

    if (sortOption == "asc")
    {
        std::sort(words.begin(), words.end());
    }
    else if (sortOption == "desc")
    {
        std::sort(words.rbegin(), words.rend());
    }
    else 
    {
        std::cout << "Invalid sort option. Please choose either 'asc' or 'desc'.\n";
    }
    return words;
}

// Remove duplicates if requested
std::vector<std::string> Application::DuplicateRemovalStage(std::vector<std::string> &words)
{
    std::string removeDuplicatesOption;
    while (true)
    {
        std::cout << "Remove duplicates? ('y' for yes or 'n' for no): ";
        std::cin >> removeDuplicatesOption;

        if (removeDuplicatesOption == "y" || removeDuplicatesOption == "n") {
            break;
        }

        std::cout << "Invalid option. Please choose either 'y' or 'n'.\n";
    }

    if (removeDuplicatesOption == "y")
    {
        library::removeDuplicates(words);
    }
    return words;
}

void Application::OutputStage(std::vector<std::string> &words)
{
    std::string saveOption;
    while (true)
    {
        std::cout << "Display or save the result? (display or save): ";
        std::cin >> saveOption;

        if (saveOption == "display" || saveOption == "save")
        {
            break;
        }

        std::cout << "Invalid option. Please choose either 'display' or 'save'.\n";
    }

    if (saveOption == "save")
    {
        std::string filename;
        std::cout << "Enter the filename to save the result: ";
        std::cin >> filename;
        library::saveWords(words, filename);
    }
    else
    {
        library::displayWords(words);
    }
}
