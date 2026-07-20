class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int start = 0;
        int second = 1;
        int unique_elements = 1;

        while( start < second && second < nums.size()) {
            if(nums[start] == nums[second]) {
                second++;
                continue;
            }
            else if(nums[start] != nums[second]) {
                unique_elements++;
                start++;
                nums[start] = nums[second];
                second++;
                }
        }

        return unique_elements;
    }
};