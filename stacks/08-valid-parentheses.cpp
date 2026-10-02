#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isValid(string s) {
    stack<char> st;

    for (char c : s) {
        if (c == '(' || c == '{' || c == '[') {
            st.push(c);
        }
        else {
            if (st.empty()) {
                return false;
            }

            char top = st.top();
            st.pop();

            if ((c == ')' && top != '(') ||
                (c == '}' && top != '{') ||
                (c == ']' && top != '[')) {
                return false;
            }
        }
    }

    return st.empty();
}

int main() {
    // Test Case 1 - Typical case
    string s1 = "()[]{}";

    cout << "Test Case 1: "
         << (isValid(s1) ? "true" : "false") << endl;

    // Test Case 2 - Edge case: mismatched brackets
    string s2 = "(]";

    cout << "Test Case 2: "
         << (isValid(s2) ? "true" : "false") << endl;

    return 0;
}
