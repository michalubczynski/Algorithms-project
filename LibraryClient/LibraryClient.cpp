

#include <iostream>

//First we need to add Library in properties LibraryClient -> C/C++ -> General 
#include "AlgorithmsLibrary.h" //..\..\..\..\..\..\Users\Majkel\Documents\GitHub\Algorithms-project\AlgorithmsLibrary;%(AdditionalIncludeDirectories)
// xD nie wiem dlaczego ale w zaden inny sposob nie dziala
//Consolidation->General->Additional Library directory ( MUSI BYC sciezka do folderu + \$(IntDir))->  C:\Users\Majkel\Documents\GitHub\Algorithms-project\AlgorithmsLibrary\$(IntDir)
//Consolidation->Input Data -> Additional relationships -> AlgorithmsLibrary.lib
int main()
{
    // Initialize a Fibonacci relation sequence.
    fibonacci_init(1, 1);
    // Write out the sequence values until overflow.
    do {
        std::cout << fibonacci_index() << ": "
            << fibonacci_current() << std::endl;
    } while (fibonacci_next());
    // Report count of values written before overflow.
    std::cout << fibonacci_index() + 1 <<
        " Fibonacci sequence values fit in an " <<
        "unsigned 64-bit integer." << std::endl;
}

