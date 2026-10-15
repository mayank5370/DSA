class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int low = 0;
        int high = 1;

        while(low < high && high <= nums.size() - 1){
            if(nums[low] == 0 && nums[high] == 0){
                high++;
            }
            else{
                if(nums[low] == 0){
                swap(nums[low], nums[high]);
            }
            low++ ;
            high++ ;
            }
        }
    }
};