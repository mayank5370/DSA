class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> posArr;
        vector<int> negArr;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < 0){
                negArr.push_back(nums[i]);
            }else{
                posArr.push_back(nums[i]);
            }
        }

        if(negArr.size() == 0){
            for(int i = 0; i < posArr.size(); i++){
                posArr[i] = posArr[i] * posArr[i];
            }

            return posArr;
        }

        if(posArr.size() == 0){
            for(int i = 0; i < negArr.size(); i++){
                negArr[i] = negArr[i] * negArr[i];
            }
            reverse(negArr.begin(), negArr.end());
            
            return negArr;
        }

        int low = 0;
        int high = 0;
        int id = 0;
        int n = negArr.size();
        int m = posArr.size();
        vector<int> result(n+m);

        for(int i = 0; i < negArr.size(); i++){
            negArr[i] = negArr[i] * negArr[i]; 
        }
        reverse(negArr.begin(), negArr.end());

        for(int i = 0; i < posArr.size(); i++){
            posArr[i] = posArr[i] * posArr[i];
        }

        while(low < negArr.size() && high < posArr.size()){
            if(negArr[low] < posArr[high]){
                result[id] = negArr[low];
                id++;
                low++;
            }else{
                result[id] = posArr[high];
                id++;
                high++;
            }
        }
        while(low < negArr.size()){
            result[id] = negArr[low];
            id++;
            low++;
        }
        while(high < posArr.size()){
            result[id] = posArr[high];
            id++;
            high++;
        }

        return result;
    }
};