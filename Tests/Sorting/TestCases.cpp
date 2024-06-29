#include <iostream>
#include "../../Tests/TestHelpers.hpp"

void runInsertionSortTests();
void runMergeSortTests();

int main()
{
    runInsertionSortTests();
    runMergeSortTests();
}

void runInsertionSortTests()
{
    /*
    Sorting Test Data
    */

    // Empty array
    int empty[] = {};
    // Small array with positives
    int smallPositives[] = {6, 3, 8, 2, 1};
    int smallPositivesExp[] = {1, 2, 3, 6, 8};
    // Small array with negatives
    int smallNegatives[] = {-7, -23, -14, -2, -6};
    int smallNegativesExp[] = {-23, -14, -7, -6, -2};
    // Small array with positives, negatives and zero
    int smallPosNeg[] = {-123, 43, -78, -937, 12, 1, 0};
    int smallPosNegExp[] = {-937, -123, -78, 0, 1, 12, 43};
    // Small array with duplicate entries
    int smallDuplicates[] = {2, 4, 1, 9, 123, 78, 4};
    int smallDuplicatesExp[] = {1, 2, 4, 4, 9, 78, 123};

    // Insertion Sort Tests
    runInsertionSortTest(empty, empty, 0, "EmptyArray");
    runInsertionSortTest(smallPositives, smallPositivesExp, 5, "SmallArrayPositives");
    runInsertionSortTest(smallNegatives, smallNegativesExp, 5, "SmallArrayNegatives");
    runInsertionSortTest(smallPosNeg, smallPosNegExp, 7, "SmallPositiveNegative");
    runInsertionSortTest(smallDuplicates, smallDuplicatesExp, 7, "SmallWithDuplicates");
}

void runMergeSortTests()
{
    /*
    Sorting Test Data
    */

    // Empty array
    int empty[] = {};
    // Small array with positives
    int smallPositives[] = {6, 3, 8, 2, 1};
    int smallPositivesExp[] = {1, 2, 3, 6, 8};
    // Small array with negatives
    int smallNegatives[] = {-7, -23, -14, -2, -6};
    int smallNegativesExp[] = {-23, -14, -7, -6, -2};
    // Small array with positives, negatives and zero
    int smallPosNeg[] = {-123, 43, -78, -937, 12, 1, 0};
    int smallPosNegExp[] = {-937, -123, -78, 0, 1, 12, 43};
    // Small array with duplicate entries
    int smallDuplicates[] = {2, 4, 1, 9, 123, 78, 4};
    int smallDuplicatesExp[] = {1, 2, 4, 4, 9, 78, 123};

    // Merge Sort Tests
    runMergeSortTest(empty, empty, 0, "EmptyArray");
    runMergeSortTest(smallPositives, smallPositivesExp, 5, "SmallArrayPositives");
    runMergeSortTest(smallNegatives, smallNegativesExp, 5, "SmallArrayNegatives");
    runMergeSortTest(smallPosNeg, smallPosNegExp, 7, "SmallPositiveNegative");
    runMergeSortTest(smallDuplicates, smallDuplicatesExp, 7, "SmallWithDuplicates");
}


