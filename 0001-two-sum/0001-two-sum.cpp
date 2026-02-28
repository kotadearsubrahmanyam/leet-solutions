class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mp;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            mp[nums[i]] = i;
        }
        for(int i = 0;i<n;i++){
            int need = target-nums[i];
            if(mp.find(need) != mp.end() && mp[need] != i){
                
                    return {mp[need],i};
                
            }
        }
        return {};
    }
};