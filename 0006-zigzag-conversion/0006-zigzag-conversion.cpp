class Solution {
public:
    string convert(string s, int numRows) {
        // If numRows is less than or equal to 1 or the length of s is less than or equal to numRows,
        // return the input string s as no conversion is required
        if (numRows <= 1 || s.length() <= numRows) {
            return s;
        }

        int len = s.length();
        vector<int> vis(len, 0); // Keeps track of visited indices in s
        string ans = s.substr(0, 1); // Initialize the answer string with the first character of s
        vis[0] = 1; // Mark the first character as visited
        int diagonal = numRows - 2;
        int i = numRows + diagonal, j = 0;

        while (ans.length() != len) {
            // Check if i is within the valid range and not visited before
            if (i >= 0 && i < len && !vis[i]) {
                ans += s[i]; // Add the character at index i to the answer string
                vis[i] = 1; // Mark the character as visited
            }
            i += numRows + diagonal - 2 * j; // Calculate the next index in the downward direction
            // Check if i is within the valid range and not visited before
            if (i >= 0 && i < len && !vis[i]) {
                ans += s[i]; // Add the character at index i to the answer string
                vis[i] = 1; // Mark the character as visited
            }
            i += 2 * j; // Calculate the next index in the upward direction
            if (i >= len) {
                j++; // Move to the next row
                i = j; // Reset i to the starting index of the new row
            }
        }

        return ans;
    }
};
