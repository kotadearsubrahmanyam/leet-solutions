# Title: Partitioning Into Minimum Number Of Deci-Binary Numbers
# Submission ID: 1932528567
# Status: Accepted
# Date: 27 February 2026 at 12:19:55 pm IST

class Solution {
public:
    int minPartitions(string n) {
        int maxi = n[0]-'0';
        for(int i = 0;i<n.size();i++){
            if(n[i]-'0'>maxi){
                maxi = n[i]-'0';
            }
        }
        return maxi;
    }
};