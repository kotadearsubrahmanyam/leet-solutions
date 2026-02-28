# Title: Number of Laser Beams in a Bank
# Submission ID: 1859511262
# Status: Accepted
# Date: 19 December 2025 at 11:37:22 am IST

class Solution {
public:

    int numberOfBeams(vector<string>& bank) {
        vector<int>result;
        for(int i = 0;i<bank.size();i++){
            result.push_back(count(bank[i].begin(),bank[i].end(),'1'));
        }
        int  res = 0;
        int ans = 0;
        for(int i = 0;i<result.size();i++){
            if(result[i]!=0){
                ans += res*result[i];
                res = result[i];
            }
        }
        return ans;
    }
};