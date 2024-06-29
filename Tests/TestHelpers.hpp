#include <iostream>
#include "../Source/Sorting/InsertionSort.hpp"

void checkResult(int expected[], int actual[], int count, std::string testName)
{
    int mismatches = 0;

    for (int i = 0; i < count; i++)
    {
        if (expected[i] != actual[i])
        {
            mismatches++;
            std::cout << testName << ": Got " << actual[i] << " but expected " << expected[i] << std::endl;
            break;
        }
    }
    
    if (mismatches == 0)
    {
        std::cout << testName << ": PASSED" << std::endl;
    }
    else
    {
        std::cout << testName << ": FAILED" << std::endl;
    }
}

void runInsertionSortTest(int input[], int expectedOutput[], int size, std::string description)
{
    // SORT the input array
    insertionSort(input, size);
    // CHECK the result
    checkResult(expectedOutput, input, size, "InsertionSort-" + description);
}