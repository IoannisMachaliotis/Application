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
    std::vector<std::string> InputStage(std::vector<std::string> &ioWords);
    std::vector<std::string> SortingStage(std::vector<std::string> &ioWords);
    std::vector<std::string> DuplicateRemovalStage(std::vector<std::string> &ioWords);

    void OutputStage(std::vector<std::string> &iWords);

    private:
    std::string _word;
    std::vector<std::string> _words;
};