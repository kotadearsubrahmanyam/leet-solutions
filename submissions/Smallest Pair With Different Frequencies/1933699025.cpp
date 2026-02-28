# Title: Smallest Pair With Different Frequencies
# Submission ID: 1933699025
# Status: Accepted
# Date: 28 February 2026 at 08:05:20 pm IST

class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {
        unordered_map<int, int> mp;
        for (int i : nums) {
            mp[i]++;
        }

   
        vector<int> values;
        for (auto &p : mp) {
            values.push_back(p.first);
        }
        sort(values.begin(), values.end());
        for (int i =0;i<values.size();i++) {
            for (int j =i + 1; j < values.size(); j++) {
                if (mp[values[i]]!= mp[values[j]]) {
                    return {values[i],values[j]};
                }
            }
        }

        return {-1, -1};
    }
};