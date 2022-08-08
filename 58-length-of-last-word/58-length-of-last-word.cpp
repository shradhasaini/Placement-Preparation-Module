class Solution {
public:
    int lengthOfLastWord(string s) {
        unsigned short word_found = 0;
        unsigned int count = 0;
        for (int index = s.size() - 1; index >= 0; --index) {
            if (word_found == 0) {
                if (!isspace(s[index])) {
                    word_found = 1;
                    ++count;
                }
            } else {
                if (isspace(s[index])) return count; 
                ++count;
            }
        }
        return count;
    }
};