#include <iostream>
#include "../../helpers/helpers.h"
using namespace std;

int main()
{
    int length = 100;
    int *arr = new int[length];
    Helpers helper;
    helper.PopulateArray(arr, length);
    helper.FisherYatesShuffle(arr, length);

    std::cout << "Shuffled array: ";
    for (int i = 0; i < length; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    for (int i = 0; i < length; i += 1)
    {
        for (int j = 0; j < (length - 1 - i); j += 1)
        {
            if (arr[j] > arr[j + 1])
            {
                helper.Swap(arr, j, j + 1);
            }
        }
    }

    std::cout << "Sorted array: ";
    for (int i = 0; i < length; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}