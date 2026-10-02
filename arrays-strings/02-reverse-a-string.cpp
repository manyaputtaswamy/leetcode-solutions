#include <iostream>
#include <vector>
using namespace std;

void reverseString(vector<char>& s) {
    int left = 0;
    int right = s.size() - 1;

    while (left < right) {
        swap(s[left], s[right]);
        left++;
        right--;
    }
}

void printString(vector<char>& s) {
    for (char c : s) {
        cout << c;
    }
    cout << endl;
}

int main() {
    // Test Case 1 - Typical case
    vector<char> s1 = {'h', 'e', 'l', 'l', 'o'};

    reverseString(s1);

    cout << "Test Case 1: ";
    printString(s1);

    // Test Case 2 - Edge case: single character
    vector<char> s2 = {'a'};

    reverseString(s2);

    cout << "Test Case 2: ";
    printString(s2);

    return 0;
}
