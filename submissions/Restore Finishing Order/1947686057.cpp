# Title: Restore Finishing Order
# Submission ID: 1947686057
# Status: Accepted
# Date: 14 March 2026 at 01:01:18 pm IST

class Solution {
public:
    vector<int> recoverOrder(vector<int>& orders, vector<int>& friends) {
        map<int,int>mp;
        for(auto i:friends){
            mp[i]++;
        }
        vector<int>result;
        for(int i = 0;i<orders.size();i++){
            if(mp[orders[i]]){
                result.push_back(orders[i]);
            }
        }
        return result;
    }
};