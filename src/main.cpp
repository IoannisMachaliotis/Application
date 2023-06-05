/* This is an Application Requested from ALTEN SA 
    on behalf of a client in Montpellier 
    @author IoannisMachaliotis
*/
#include "Application.cpp"

int main(int argc, char** argv)
{
    std::vector<std::string> words;
    // Create the input [with OOP]
    Application App;
    App.InputStage(words);

    // // Create the input [without OOP]
    // InputStage(words);

    // Display the list 
    App.DisplayWords(words);
    return 0;
}
