class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        unordered_set<int> st(nums.begin(), nums.end());
        int maxCons = 1;
        for(int i = 0 ; i < nums.size(); i++){
            if(st.find(nums[i] - 1) == st.end()){
                int cons = 1;
                int j = nums[i];
                while(st.find(j + 1) != st.end()){
                    cons++;
                    j++;
                }
                maxCons = max(cons,maxCons);
            }
        }
        return maxCons;
    }
};
