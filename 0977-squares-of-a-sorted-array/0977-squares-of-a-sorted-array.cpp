class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int j = n - 1;
        vector<int> res(n);
        int k = j;
        while(i <= j){
            if(nums[i] * nums[i] >= nums[j] * nums[j]){
                res[k] = nums[i] * nums[i];
                i++;
                k--;
            }
            else{
                res[k] = nums[j] * nums[j];
                j--;
                k--;
            }
        }
        return res;
    }
};