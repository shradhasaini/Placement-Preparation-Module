class Solution {
public:
    string intToRoman(int num) {
        int lookUpInt[7] = {1000, 500, 100, 50, 10, 5, 1};
        char lookUpChar[7] = {'M', 'D', 'C', 'L', 'X', 'V', 'I'};
        string roman = "";
        
        for (int i = 0; i < 7; i++) {
            int tempRes = num / lookUpInt[i];
            
            if (tempRes > 0) {
                // Handle special cases
                if (tempRes == 1) {
                    // D
                    if (i == 1) {
                        // Check if 900
                        if (num / lookUpInt[i + 1] == 9) {
                            // 900
                            string s("CM");
                            roman.append(s);
                            
                            // Skip next roman letter as redundant
                            i++;
                        }
                        else {
                            // Just 500
                            roman.push_back('D');
                        }
                    }
                    // L
                    else if (i == 3) {
                        // Check if 90
                        if (num / lookUpInt[i + 1] == 9) {
                            // 90
                            string s("XC");
                            roman.append(s);
                            
                            // Skip next roman letter as redundant
                            i++;
                        }
                        else {
                            // Just 50
                            roman.push_back('L');
                        }
                    }
                    // V
                    else if (i == 5) {
                        // Check if 9
                        if (num / lookUpInt[i + 1] == 9) {
                            // 9
                            string s("IX");
                            roman.append(s);
                            
                            // Skip next roman letter as redundant
                            i++;
                        }
                        else {
                            // Just 5
                            roman.push_back('V');
                        }
                    }
                    else {
                        roman.push_back(lookUpChar[i]);
                    }
                }
                else if (tempRes == 4) {
                    // C
                    if (i == 2) {
                        // 400
                        string s("CD");
                        roman.append(s);
                    }
                    // X
                    else if (i == 4) {
                        // 40
                        string s("XL");
                        roman.append(s);
                    }
                    // I
                    else if (i == 6) {
                        // 4
                        string s("IV");
                        roman.append(s);
                    }
                }
                else {
                    // Append intermediate results roman equivalent
                    string s(tempRes, lookUpChar[i]);
                    roman.append(s);
                }
                // Update number to rest
                num %= lookUpInt[i];  
            }
        }
        
        return roman;
    }
};