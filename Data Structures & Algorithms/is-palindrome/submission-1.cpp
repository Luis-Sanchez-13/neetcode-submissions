class Solution {
public:
    bool isPalindrome(string s) {
        
        bool palindrome = true;

        string new_s;
        for (unsigned char c : s) {
            if (isalnum(c)) {
                new_s += tolower(c);
            }
        }
        // cout << new_s << endl;
    

        size_t n = new_s.length();
        for (size_t left = 0; left < n/2; left++) {

            // cout << left << endl;
            // cout << right << endl;
            if (new_s[left] != new_s[n - 1 - left]) {
                return false;
            }
        
        }

        return true;


    }
};
