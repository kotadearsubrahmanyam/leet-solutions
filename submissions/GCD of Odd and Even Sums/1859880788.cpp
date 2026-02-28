# Title: GCD of Odd and Even Sums
# Submission ID: 1859880788
# Status: Accepted
# Date: 19 December 2025 at 08:50:29 pm IST

class Solution {
public:
int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b, a % b);
}

    int gcdOfOddEvenSums(int n) {
        return gcd (n*(n+1),n*n);
    }
};