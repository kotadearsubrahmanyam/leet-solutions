# Title: Sort Colors
# Submission ID: 1946714201
# Status: Accepted
# Date: 13 March 2026 at 11:32:57 am IST

class Solution {
public:
    void sortColors(vector<int>& arr) {

        int n = arr.size();
        int k = 0;
        while(k<n){
         int i = 0;
        int j = 1;
            
         while(i<n &&j<n){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                i = j;
                j = i+1;
            }
            i++;
            j++;
        }
        k++;
        }

        for(auto i: arr)
{
    cout<<i;
}
    }
};