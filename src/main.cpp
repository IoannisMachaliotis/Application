/* This is an Application Requested from ALTEN SA 
    on behalf of a client in Montpellier 
    @author IoannisMachaliotis
*/
#include "Application.cpp"

int main(int argc, char** argv)
{
    std::vector<std::string> words;
    // Create the input words [with OOP]
    Application App;
    App.InputStage(words);

    // // Create the input words [without OOP]
    // InputStage(words);

    // Sorting Stage
    App.SortingStage(words);

    // Duplicates Stage
    App.DuplicateRemovalStage(words);

    // Ouput Stage
    App.OutputStage(words);

    return 0;
}
