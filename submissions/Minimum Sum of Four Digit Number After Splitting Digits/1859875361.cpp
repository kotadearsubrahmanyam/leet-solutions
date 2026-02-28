# Title: Minimum Sum of Four Digit Number After Splitting Digits
# Submission ID: 1859875361
# Status: Accepted
# Date: 19 December 2025 at 08:42:35 pm IST

class Solution {
public:
    int minimumSum(int num) {
        vector<int>result;
        int n = 0;
        while(num!=0){
            result.push_back(num%10);
            num = num/10;
            n++;
        }
        
        sort(result.begin(),result.end());
       
        int sum = 0;
        // for(int i = 0;i<result.size();i++){
        //     cout<<result[i];
        // }
        int i = 0;
        int j = n-1;
        while(i<j){
            sum = sum + result[i]*10 + result[j];
            i++;
            j--;
        }
        return sum;
    }
};