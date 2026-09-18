#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Test Case 1: Typical case
    // Input: anagram, nagaram
    // Expected Output: Valid Anagram

    string str1 = "anagram";
    string str2 = "nagaram";

    int count1[26] = {0};
    int count2[26] = {0};

    for (char c : str1)
        count1[c - 'a']++;

    for (char c : str2)
        count2[c - 'a']++;

    bool isAnagram = true;

    for (int i = 0; i < 26; i++)
    {
        if (count1[i] != count2[i])
        {
            isAnagram = false;
            break;
        }
    }

    if (isAnagram)
        cout << "Valid Anagram" << endl;
    else
        cout << "Not an Anagram" << endl;

    // Test Case 2: Edge case
    // Input: rat, car
    // Expected Output: Not an Anagram

    return 0;
}