//Missing number
//Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int num;
        int actual_sum = (n*(n+1))/2;
        int sum = 0 ;
        for(int i = 0 ; i<n;i++){
            sum+=nums[i];
        }
        num = actual_sum - sum;
        return num;
    }
};