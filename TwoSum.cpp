class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> numbers;
        
        for ( int i =0; i <nums.size();i++){

            int val = target - nums[i];
            if ( numbers.find(val) != numbers.end()){
                return {numbers[val],i};
            }
            
            numbers[nums[i]] = i;
        }
        return {};
    }
};
