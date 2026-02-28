# Title: Minimum Number of Operations to Move All Balls to Each Box
# Submission ID: 1932525186
# Status: Accepted
# Date: 27 February 2026 at 12:16:03 pm IST

class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int>result;
        
  for(int i = 0;i<boxes.size();i++){
    int sum = 0;
    for(int j = 0;j<boxes.size();j++){
        if(boxes[j]=='1'){
            sum = sum + abs(i-j);
        }
    }
    result.push_back(sum);
  }
        return result;
    }
};