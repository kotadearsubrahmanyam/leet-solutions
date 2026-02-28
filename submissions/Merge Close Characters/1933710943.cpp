# Title: Merge Close Characters
# Submission ID: 1933710943
# Status: Accepted
# Date: 28 February 2026 at 08:10:37 pm IST

class Solution {
public:
    string mergeCharacters(string s, int k) {
         bool merged = true;
        while(merged) {
            merged= false;
            int n= s.size();
            for (int i =0; i < n; i++) {
                for (int j =i +1; j < n; j++) {
                    if (s[i] == s[j] && (j - i) <= k) {
                        s.erase(s.begin() + j);
                        merged = true;
                        break;
                    }
                }
                if (merged) break;
            }
        }
        return s;
    }
};