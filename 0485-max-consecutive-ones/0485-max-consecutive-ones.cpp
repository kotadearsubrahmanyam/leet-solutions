class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int maxi = 0;
        int cone = 0;
        while(i<n){
            
            if(nums[i]==1){
                cone++;
                maxi = max(cone,maxi);
            }else{
                cone = 0;
            }
            i++;
        }
        return maxi;
    }
};