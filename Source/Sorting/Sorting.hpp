#include <iostream>

void insertionSort(int array[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int key = array[i];
        int j = i - 1;
        while (array[j] > key && j >= 0)
        {
            array[j+1] = array[j];
            j = j - 1;
        }
        array[j+1] = key;
    }
}

void mergeSort(int array[], int size)
{
    if (size <= 1)
    {
        return;
    }

    int lhsSize = (int)(size/2);
    int lhs[lhsSize];
    int rhsSize = size % 2 == 0 ? lhsSize : lhsSize + 1;
    int rhs[rhsSize];

    for (int i = 0; i < lhsSize; i++)
    {
        lhs[i] = array[i];
    }
    for (int j = 0; j < rhsSize; j++)
    {
        rhs[j] = array[lhsSize + j];
    }

    mergeSort(lhs, lhsSize);
    mergeSort(rhs, rhsSize);

    int k = 0;
    int l = 0;
    while (k < lhsSize && l < rhsSize)
    {
        if (lhs[k] < rhs[l])
        {
            array[k + l] = lhs[k];
            k++;
        }
        else
        {
            array[k + l] = rhs[l];
            l++;
        }
    }
    while (k < lhsSize)
    {
        array[k + l] = lhs[k];
        k++;
    }
    while (l < rhsSize)
    {
        array[k + l] = rhs[l];
        l++;
    }
}