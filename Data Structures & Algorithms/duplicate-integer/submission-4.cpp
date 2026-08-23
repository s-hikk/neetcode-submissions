class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map <int,int> mp;
        // we can store frequency and then solve them.
        for(int x: nums){
            if(mp.find(x) != mp.end()){
                return true;
            }

            mp[x]++;
        }


        return false;
    }
};