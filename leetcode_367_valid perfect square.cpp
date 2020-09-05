class Solution {
public:
    bool isPerfectSquare(int num) {
        int left=1, right=num;
        while(left<=right){
            int mid = left+(right-left)/2;
            if(num%mid==0 && mid == num/mid) return true;
            if(mid < num/mid) left =mid+1;
            else right=mid-1;
        }
        return false;
    }
};