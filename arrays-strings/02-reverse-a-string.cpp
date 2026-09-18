#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Test Case 1: Typical case
    // Input: hello
    // Expected Output: olleh

    string str = "hello";

    int start = 0;
    int end = str.length() - 1;

    while (start < end)
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }

    cout << "Reversed string: " << str << endl;

    // Test Case 2: Edge case
    // Input: a
    // Expected Output: a

    return 0;
}