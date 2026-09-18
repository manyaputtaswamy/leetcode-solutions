#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Test Case 1: Typical case
    // Input: flower, flow, flight
    // Expected Output: fl

    string words[] = {"flower", "flow", "flight"};
    int n = 3;

    string prefix = words[0];

    for (int i = 1; i < n; i++)
    {
        int j = 0;

        while (j < prefix.length() &&
               j < words[i].length() &&
               prefix[j] == words[i][j])
        {
            j++;
        }

        prefix = prefix.substr(0, j);
    }

    cout << "Longest Common Prefix: " << prefix << endl;

    // Test Case 2: Edge case
    // Input: dog, racecar, car
    // Expected Output: No common prefix

    return 0;
}