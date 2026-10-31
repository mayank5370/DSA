class Solution {
public:
    bool isSubsequence(string s, string t) {
        int start1 = 0;
        int start2 = 0;
        int count = 0;

        while(start1 < s.length() && start2 < t.length()){
            if(s[start1] != t[start2]){
                start2++;
            }
            else{
                start1++;
                start2++;
                count++;
            }
        }

        if(count == s.length()){
            return true;
        }
        else{
            return false;
        }
    }
};