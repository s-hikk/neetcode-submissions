class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
       //3 mthods to solve this problem:
       /*
            First, using extra space by utilizing count of frequencies using Hash Tables. 
            Second, using XOR operations to see and return values.
            Third, to run two loops to check every item.
            Also, the question would change if the given input is in ordered, sorted format.
            I'll solve with the perspective of unosrted array.
       */ 

        for(int i= 0; i<nums.size(); i++){
            for(int j = i + 1; j<nums.size(); j++){
                if(nums[i] == nums[j]) return true;
            }
        }
        return false;
    }
};