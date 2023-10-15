#include "helpers.h"
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()
using namespace std;

int *Helpers::PopulateArray(int *result, int length)
{
    for (int i = 1; i <= length; i += 1)
    {
        result[i - 1] = i;
    }
    return result;
}

// Fisher-Yates shuffle algorithm
int *Helpers::FisherYatesShuffle(int *result, int length)
{
    // Initialize random seed
    srand(static_cast<unsigned int>(time(nullptr)));
    for (int i = length - 1; i > 0; --i)
    {
        // Generate a random index between 0 and i (inclusive)
        int j = std::rand() % (i + 1);
        Swap(result, i, j);
    }
    return result;
}

int *Helpers::Swap(int *result, int i, int j)
{
    // Swap arr[i] and arr[j]
    int temp = result[i];
    result[i] = result[j];
    result[j] = temp;
    return result;
}