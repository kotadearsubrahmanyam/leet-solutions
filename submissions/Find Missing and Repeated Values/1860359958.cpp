# Title: Find Missing and Repeated Values
# Submission ID: 1860359958
# Status: Accepted
# Date: 20 December 2025 at 12:37:24 pm IST

class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        map<int ,int>mp;
        int count = 0;
            for(int i = 0;i<grid.size();i++){
                for(int j = 0;j<grid[i].size();j++){
                    mp[grid[i][j]]++;
                    count++;
                }
            }
            vector<int>result;
            int repeated;
            int missing;
           for(int i = 1;i<=count;i++){
            if(mp[i]==2){
                repeated = i;
            }
            else if(mp[i]==0){
               missing = i;
            }
           }
          result.push_back(repeated);
          result.push_back(missing);
          return result;
    }
};