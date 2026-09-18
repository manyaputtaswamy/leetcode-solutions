#include <iostream>
using namespace std;

int main()
{
    // Test Case 1: Typical case
    // Input: nums = {0, 1, 0, 3, 12}
    // Expected Output: 1 3 12 0 0

    int nums[] = {0, 1, 0, 3, 12};
    int n = 5;

    int position = 0;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] != 0)
        {
            nums[position] = nums[i];
            position++;
        }
    }

    while (position < n)
    {
        nums[position] = 0;
        position++;
    }

    cout << "After moving zeroes: ";

    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }

    cout << endl;

    // Test Case 2: Edge case
    // Input: nums = {0, 0, 1}
    // Expected Output: 1 0 0

    return 0;
}