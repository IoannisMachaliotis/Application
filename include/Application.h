/* This is an Application Requested from ALTEN SA 
    on behalf of a client in Montpellier 
    @author IoannisMachaliotis
*/

#pragma once

#include <iostream>
#include <vector>
#include <string>

class Application
{
    public: 
    std::vector<std::string> InputStage(std::vector<std::string> &words);

    void DisplayWords(std::vector<std::string> &words);

    private:
    std::string word;
    std::vector<std::string> words;
};