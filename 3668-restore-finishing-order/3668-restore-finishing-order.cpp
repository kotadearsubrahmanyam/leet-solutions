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