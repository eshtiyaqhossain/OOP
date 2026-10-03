#include<iostream>
using namespace std;

class Solution {
public:
    int longestValidParentheses(string s) {
        int left = 0;
        int right = 0;
        int maxLength = 0;

        // Left to right
        for (char c : s) {
            if (c == '(') {
                left++;
            } else {
                right++;
            }

            if (left == right) {
                maxLength = max(maxLength, 2 * right);
            } else if (right > left) {
                left = 0;
                right = 0;
            }
        }

        // Right to left
        left = 0;
        right = 0;

        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] == '(') {
                left++;
            } else {
                right++;
            }

            if (left == right) {
                maxLength = max(maxLength, 2 * left);
            } else if (left > right) {
                left = 0;
                right = 0;
            }
        }

        return maxLength;
    }
};
int main() {
    Solution sol;
    string s;

    cout << "Enter parenthesis string: ";
    cin >> s;

    int result = sol.longestValidParentheses(s);
    cout << "Longest Valid Parentheses Length: " << result << endl;

    return 0;
}
