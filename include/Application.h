/* This is an Application Requested from ALTEN SA 
    on behalf of a client in Montpellier 
    @author IoannisMachaliotis
*/

#pragma once

#include <vector>
#include <string>

class Application
{
    public: 
    std::vector<std::string> InputStage(std::vector<std::string> &words);
    std::vector<std::string> SortingStage(std::vector<std::string> &words);
    std::vector<std::string> DuplicateRemovalStage(std::vector<std::string> &words);

    void OutputStage(std::vector<std::string> &words);

    private:
    std::string word;
    std::vector<std::string> words;
};