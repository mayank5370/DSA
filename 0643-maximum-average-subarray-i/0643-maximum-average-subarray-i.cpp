class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int low = 0;
        int high = k - 1;
        double sum = 0;
        double avg = 0;
        double result = INT_MIN;
        
        for(int i = low; i <= high; i++){
            sum += nums[i];
            avg = sum / k ;
        }

        while(high < nums.size()){
            result = max(result, avg);
            low++;
            high++;

            if(high == nums.size()){
                break;
            }

            sum -= nums[low-1];
            sum += nums[high];
            avg = sum / k;
        }

        return result;
    }   
};