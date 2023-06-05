/* This is an Application Requested from ALTEN SA 
    on behalf of a client in Montpellier 
    @author IoannisMachaliotis
*/
#include "../include/Application.h"

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

void Application::DisplayWords(std::vector<std::string> &words)
{
    std::cout << "\n---------- List of words: ----------\n";
    for (const std::string& word : words)
    {
        std::cout << word << "\n";
    }
}