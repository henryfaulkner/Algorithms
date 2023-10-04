#include <iostream>
using namespace std;

class Helper
{
public:
    Helper() {}
    int *PopulateArray(int *result, int length)
    {
        for (int i = 1; i <= length; i += 1)
        {
            result[i - 1] = i;
        }
        return result;
    }
};

// time complexity: O(n)
// space complexity: N/A
int main()
{
    int length = 100;
    int *arr = new int[length];
    Helper helper;
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