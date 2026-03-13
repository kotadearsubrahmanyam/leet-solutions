class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>organised;
        int n = nums.size();
    for(int i = 0;i<n;i++){
        if(nums[i]>=0){
            organised.push_back(nums[i]);
        }
    }
    int j = organised.size();
        for(int i = 0;i<n;i++){
            if(nums[i]<0){
                organised.push_back(nums[i]);
            }
        }
        vector<int>result;
        int k = 0;
        for(int i = 0;i<n;i++){
            if(i%2 == 0){
                result.push_back(organised[k]);
                k++;
            }
            else{
                result.push_back(organised[j]);
                j++;
            }
        }
        return result;
    }
};