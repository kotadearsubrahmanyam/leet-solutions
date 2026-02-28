# Title: Split a String in Balanced Strings
# Submission ID: 1859040796
# Status: Accepted
# Date: 18 December 2025 at 09:04:14 pm IST

class Solution {
public:
    int balancedStringSplit(string s) {
        int countr = 0;
        int countl = 0;
        int total = 0;
        for(int i = 0;i<s.size();i++){
            if(s[i]=='R'){
            countr++;
            }
            else{
                countl++;
            }
            if(countr==countl){
                total++;
                countr=0;
                countl = 0;
            }
        }
        return total;
        
    }
};