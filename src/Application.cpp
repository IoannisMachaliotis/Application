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

std::vector<std::string> Application::InputStage(std::vector<std::string> &ioWords)
{
    std::cout << "Enter a list of words (press Enter after each word, type 'done' to finish):\n";
    
    std::string aWord;

    while (true)
    {
        std::cin >> aWord;
        
        if (aWord == "done")
        {
            break;
        }
        
        ioWords.push_back(aWord);
    }

    return ioWords;
}

std::vector<std::string> Application::SortingStage(std::vector<std::string> &ioWords)
{
    std::string aSortOption;
    while (true) {
        std::cout << "Type 'asc' for ascending or 'desc' descending order.\n";
        std::cin >> aSortOption;

        if (aSortOption == "asc" || aSortOption == "desc") {
            break;
        }
        std::cout << "Invalid sort option. Please choose either 'asc' or 'desc'.\n";
    }

    if (aSortOption == "asc")
    {
        std::sort(ioWords.begin(), ioWords.end());
    }
    else if (aSortOption == "desc")
    {
        std::sort(ioWords.rbegin(), ioWords.rend());
    }
    else 
    {
        std::cout << "Invalid sort option. Please choose either 'asc' or 'desc'.\n";
    }
    return ioWords;
}

// Remove duplicates if requested
std::vector<std::string> Application::DuplicateRemovalStage(std::vector<std::string> &ioWords)
{
    std::string aRemoveDuplicatesOption;
    while (true)
    {
        std::cout << "Remove duplicates? ('y' for yes or 'n' for no): ";
        std::cin >> aRemoveDuplicatesOption;

        if (aRemoveDuplicatesOption == "y" || aRemoveDuplicatesOption == "n") {
            break;
        }

        std::cout << "Invalid option. Please choose either 'y' or 'n'.\n";
    }

    if (aRemoveDuplicatesOption == "y")
    {
        library::removeDuplicates(ioWords);
    }
    return ioWords;
}

void Application::OutputStage(std::vector<std::string> &iWords)
{
    std::string aSaveOption;
    while (true)
    {
        std::cout << "Display or save the result? (display or save): ";
        std::cin >> aSaveOption;

        if (aSaveOption == "display" || aSaveOption == "save")
        {
            break;
        }

        std::cout << "Invalid option. Please choose either 'display' or 'save'.\n";
    }

    if (aSaveOption == "save")
    {
        std::string aFilename;
        std::cout << "Enter the filename to save the result: ";
        std::cin >> aFilename;
        library::saveWords(iWords, aFilename);
    }
    else
    {
        library::displayWords(iWords);
    }
}
