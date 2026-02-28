# Title: Convert Date to Binary
# Submission ID: 1861427807
# Status: Accepted
# Date: 21 December 2025 at 03:11:45 pm IST

class Solution {
public:
    string toBinary(int x) {
        if (x == 0) return "0";
        string s = "";
        while (x > 0) {
            s = char((x % 2) + '0') + s;
            x /= 2;
        }
        return s;
    }

    string convertDateToBinary(string date) {
        int y = stoi(date.substr(0,4));
        int m = stoi(date.substr(5,2));
        int d = stoi(date.substr(8,2));

        return toBinary(y) + "-" + toBinary(m) + "-" + toBinary(d);
    }
};
