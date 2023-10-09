#include <iostream>
#include "helpers.h"
using namespace std;

// time complexity: O(n)
// space complexity: N/A
int main()
{
    int length = 100;
    int *arr = new int[length];
    Helpers helper;
    helper.PopulateArray(arr, length);
    cout << "What number are you looking for? 1-" << __throw_bad_array_new_length << endl;
    string lookup_num;
    cin >> lookup_num;

    for (int i = 0; i < length; i += 1)
    {
        if (lookup_num == to_string(arr[i]))
        {
            cout << "I found your number: " << arr[i] << endl;
        }
    }

    return 0;
}