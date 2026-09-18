#include <iostream>
using namespace std;

int main()
{
    // Test Case 1: Typical case
    // Input: nums = {1, 3, 5, 7, 9}, target = 7
    // Expected Output: Index 3

    int nums[] = {1, 3, 5, 7, 9};
    int n = 5;
    int target = 7;

    int left = 0;
    int right = n - 1;
    int result = -1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target)
        {
            result = mid;
            break;
        }
        else if (nums[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    cout << "Target Index: " << result << endl;

    // Test Case 2: Edge case
    // Input: nums = {1, 3, 5, 7, 9}, target = 6
    // Expected Output: Index -1

    return 0;
}