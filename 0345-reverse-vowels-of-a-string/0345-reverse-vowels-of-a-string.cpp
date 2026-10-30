class Solution {
public:
    string reverseVowels(string s) {
        int start = 0;
        int end = s.length() - 1;

        while(start < end){
            if(s[start] != 73 && s[start] != 65 && s[start] != 69 && s[start] != 79 && s[start] != 85 && s[start] != 97 && s[start] != 101 && s[start] != 105 && s[start] != 111 && s[start] != 117){
                start++ ;
            }
            else if(s[end] != 65 && s[end] != 69 && s[end] != 73 && s[end] != 79 && s[end] != 85 && s[end] != 97 && s[end] != 101 && s[end] != 105 && s[end] != 111 && s[end] != 117){
                end-- ;
            }
            else{
                swap(s[start], s[end]);
                start++;
                end--;
            }
        }

        return s;
    }
};