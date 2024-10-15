class Solution {
public:
    bool isPerfectSquare(int num) {
        int left=1; int right= num;
        int mid= left+(right-left)/2;
        while(left<=right){ 
            if(num%mid==0 && mid==num/mid)return true;
            if (mid > num/mid){ 
                right=mid-1;
            }
            else left= mid+1;
            mid= left+(right-left)/2;
        }
        return false;
    }
};