# Title: Defanging an IP Address
# Submission ID: 1859004984
# Status: Accepted
# Date: 18 December 2025 at 08:18:03 pm IST

class Solution {
public:
    string defangIPaddr(string address) {
        string result = "";
        for(int i = 0;i<address.size();i++){
            if(address[i]=='.'){
                result.push_back('[');
                result.push_back('.');
                result.push_back(']');
            }else{
                result.push_back(address[i]);
            }
        }
        return result;
    }
};