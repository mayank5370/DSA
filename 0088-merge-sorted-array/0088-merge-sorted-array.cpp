class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int start1 = m - 1;
        int start2 = n - 1;
        int end1 = m + n - 1;

        while(start2 >= 0) {

            if(start1 >= 0 && nums1[start1] > nums2[start2]) {
                nums1[end1] = nums1[start1];
                start1--;
            }
            else {
                nums1[end1] = nums2[start2];
                start2--;
            }

            end1--;
        }
    }
};