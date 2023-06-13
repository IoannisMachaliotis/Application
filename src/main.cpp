/* This is an Application Requested from ALTEN SA 
    on behalf of a client in Montpellier 
    @author IoannisMachaliotis
*/
#include "Application.cpp"

int main(int argc, char** argv)
{
    std::vector<std::string> aWords;
    // Create the input aWords [with OOP]
    Application App;
    App.InputStage(aWords);
    
    // Sorting Stage
    App.SortingStage(aWords);

    // Duplicates Stage
    App.DuplicateRemovalStage(aWords);

    // Ouput Stage
    App.OutputStage(aWords);

    return 0;
}
