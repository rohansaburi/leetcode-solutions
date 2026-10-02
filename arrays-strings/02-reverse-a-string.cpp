class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0;
        int right = s.size() - 1;

        while (left < right) {
            swap(s[left], s[right]);
            left++;
            right--;
        }
    }
};

// Test Case 1: ["h","e","l","l","o"] → ["o","l","l","e","h"]
// Test Case 2: ["H","a","n","n","a","h"] → ["h","a","n","n","a","H"]