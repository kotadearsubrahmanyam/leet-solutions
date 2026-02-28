# Title: Check if the Sentence Is Pangram
# Submission ID: 1859827220
# Status: Accepted
# Date: 19 December 2025 at 07:34:46 pm IST

class Solution {
public:
    bool checkIfPangram(string sentence) {
        map<char,int>mp;
        for(auto i:sentence){
            mp[i]++;
        }
        if(mp.size()>=26){
            return true;
        }
        
        return false;
    }
};