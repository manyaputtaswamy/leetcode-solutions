#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    // Test Case 1: Typical case
    // Input: s = "()[]{}"
    // Expected Output: Valid Parentheses

    string s = "()[]{}";
    stack<char> st;

    for (char c : s)
    {
        if (c == '(' || c == '[' || c == '{')
        {
            st.push(c);
        }
        else
        {
            if (st.empty())
            {
                cout << "Invalid Parentheses" << endl;
                return 0;
            }

            char top = st.top();
            st.pop();

            if ((c == ')' && top != '(') ||
                (c == ']' && top != '[') ||
                (c == '}' && top != '{'))
            {
                cout << "Invalid Parentheses" << endl;
                return 0;
            }
        }
    }

    if (st.empty())
        cout << "Valid Parentheses" << endl;
    else
        cout << "Invalid Parentheses" << endl;

    // Test Case 2: Edge case
    // Input: s = "(]"
    // Expected Output: Invalid Parentheses

    return 0;
}