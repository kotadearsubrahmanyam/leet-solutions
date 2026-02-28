# Title: Find Closest Person
# Submission ID: 1859859679
# Status: Accepted
# Date: 19 December 2025 at 08:19:32 pm IST

class Solution {
public:
    int findClosest(int x, int y, int z) {
        int xz = abs(x-z);
        int yz = abs(y-z);
        if(xz<yz){
            return 1;
        }else if(xz>yz){
            return 2;
        }
        return 0;
        
    }
};