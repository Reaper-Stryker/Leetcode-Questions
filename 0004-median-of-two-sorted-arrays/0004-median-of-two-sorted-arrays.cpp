class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size() > nums2.size()){
            return findMedianSortedArrays(nums2, nums1);
        }
        int low = 0;
        int high = nums1.size();
        int totalLeft = (nums1.size() + nums2.size() + 1) / 2;
        while(low <= high){
            int i = (low + high) / 2;
            int j = totalLeft - i;
            int L1 = (i == 0) ? INT_MIN : nums1[i - 1];
            int R1 = (i == nums1.size()) ? INT_MAX : nums1[i];
            int L2 = (j == 0) ? INT_MIN : nums2[j - 1];
            int R2 = (j == nums2.size()) ? INT_MAX : nums2[j];
            if(L1 <= R2 && L2 <= R1){
                if((nums1.size() + nums2.size()) % 2 == 0){
                    return ((double)((L1 > L2 ? L1 : L2) + (R1 < R2 ? R1 : R2))) / 2.0;
                }
                else{
                    return (double)(L1 > L2 ? L1 : L2);
                }
            }
            else if(L1 > R2) high = i - 1;
            else low = i + 1;
        }
        return 0.0;
    }
};
