#include "helpers.h"

int *Helpers::PopulateArray(int *result, int length)
{
    for (int i = 1; i <= length; i += 1)
    {
        result[i - 1] = i;
    }
    return result;
}