class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,tuple<int,int>> vals = {
            {'I' , {1,1}},
            {'V' , {2,5}},
            {'X' , {3,10}},
            {'L' , {4,50}},
            {'C' , {5,100}},
            {'D' , {6,500}},
            {'M' , {7,1000}}
        };

        long int num = get<1>(vals[s[s.length()-1]]);
        for(int i =s.length()-2; i >= 0;i--){
            if (get<0>(vals[s[i+1]]) <= get<0>(vals[s[i]])  ){
                num += get<1>(vals[s[i]]);
            }
            else {
                num -= get<1>(vals[s[i]]);
            }
        }
        return num;
    }

};
