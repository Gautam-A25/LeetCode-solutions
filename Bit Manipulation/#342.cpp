class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==1) return true;
        else if(n<4) return false;
        return (n & 0x55555555) && (n & n-1) == 0;
    }
};