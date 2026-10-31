class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int start = 0;
        int end = numbers.size()-1;
        int ans;
        while(start <= end){
            ans = numbers[start] + numbers[end];
            if(ans == target){
                return {start+1, end+1};
            }
            else if(ans > target){
                end--;
            }
            else if(ans < target){
                start++;
            } 
        }
        return {};
    } 
};