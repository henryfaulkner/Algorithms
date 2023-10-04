#include <iostream>
using namespace std;

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

// time complexity: O(log(n)))
// space complexity: N/A
int main()
{
    int length = 100;
    int *arr = new int[100];
    Helper helper;
    helper.PopulateArray(arr, length);

    cout << "What number are you looking for? 1-" << length << endl;
    string lookup_str;
    cin >> lookup_str;
    int lookup_num = stoi(lookup_str);

    // inclusive
    int low = 1;
    // exclusive
    int high = length;
    int mid;
    do
    {
        mid = low + (high - low) / 2;
        if (lookup_num == mid)
            break;
        else if (lookup_num > mid)
            low = mid + 1;
        else
            high = mid;
    } while (lookup_num != mid);

    cout << "I found your number: " << mid << endl;
    return 0;
}