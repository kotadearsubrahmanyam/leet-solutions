class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n = nums.size();
        vector<int>result;
        for(auto i:nums){
            result.push_back(nums[i]);
        }
        return result;
    }
};