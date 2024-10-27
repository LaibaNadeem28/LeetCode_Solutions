class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string ans = "";
        int n = strs[0].length();
        for ( int i=0; i < n;i++){
            char temp = strs[0][i];
            set<char> s;
            for ( int   j = 0; j < strs.size();j++){
                    s.insert(strs[j][i]);
                    if( s.size() > 1){
                        return ans;
                    }
            }
            ans+=temp;
        }

        return ans;
    }
};
