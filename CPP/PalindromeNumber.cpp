class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        int n = s.length()-1;
        for ( int i =0; i < s.length()/2;i++){
            if( s[i] != s[n-i]){
                return false;
            }
        }

        return true;
    }
};
