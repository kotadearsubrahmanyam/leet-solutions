# Title: Find Most Frequent Vowel and Consonant
# Submission ID: 1859012237
# Status: Accepted
# Date: 18 December 2025 at 08:27:25 pm IST

class Solution {
public:
    int maxFreqSum(string s) {
        map<char,int>mp;
        for(auto i : s){
            mp[i]++;
        }
       
        int maxiv = 0;
        int maxic = 0;
        for(int i = 0;i<s.size();i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                maxiv = max(mp[s[i]],maxiv);
            }
            else{
                maxic = max(mp[s[i]],maxic);
            }
        }
        return maxiv+maxic;
    }
};