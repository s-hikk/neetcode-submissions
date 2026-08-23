class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int remTarget = 0;
        unordered_map<int ,int>mp;
        
        for(int i = 0 ; i < nums.size(); i++){
            int diff = target - nums[i];
            if(mp.find(diff)!= mp.end()){
                return {mp[diff], i};
            }
            mp.insert({nums[i], i});
            }
        return {};
    }
};
