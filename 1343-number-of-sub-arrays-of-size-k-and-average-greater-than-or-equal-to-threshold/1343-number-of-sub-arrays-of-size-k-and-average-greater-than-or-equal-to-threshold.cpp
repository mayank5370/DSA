class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int low = 0;
        int high = k - 1;
        double sum = 0;
        double avg = 0;
        int res = 0;

        for(int i = low; i <= high; i++){
            sum += arr[i];
            avg = sum / k ;
        }

        while(high < arr.size()){

            if(avg >= threshold){
                res++ ;
            }

            low++;
            high++;

            if(high == arr.size()){
                break;
            }

            sum -= arr[low - 1];
            sum += arr[high];
            avg = sum / k ;
        }

        return res;
    }
};