#include <iostream>
#include "../../helpers/helpers.h"
using namespace std;

// Given two crystal balls that will break if dropped from a high enough
// distance, determine the exact spot in which it will break in the most
// optimized way.

// Jump sqrt(n) forward as a loop; if break occurs, walk back the sqrt unit
// until we find the break point.

// time complexity: O(n)
// space complexity: N/A
int main()
{
    int length = 100;
    Helpers helper;
    int *arr = new int[length];
    helper.PopulateArray(arr, length);

    int break_level;
    cout << "Define the break level: " << endl;
    cin >> break_level;

    int jump_amount = floor(sqrt((double)length));
    int i = jump_amount;
    for (; i < length; i += jump_amount)
    {
        if (arr[i] == break_level)
        {
            cout << "I found the optimized breaking level: " << arr[i] << endl;
            return 0;
        }

        if (arr[i] > break_level)
            break;
    }

    i -= jump_amount;

    for (int j = 0; j < jump_amount && j < length; j += 1, i += 1)
    {
        if ((arr[i]) == break_level)
        {
            cout << "I found the optimized breaking level: " << arr[i] << endl;
            break;
        }
    }

    return 0;
}