class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int j =2;
        int i = 0; int k = 0;
        vector<int> arr(2*nums.size());
        while(j--){
            while(i != nums.size()){
                arr[k] = nums[i];
                k++;
                i++;
            }
        i = 0;
    }
    return arr;
    }
};
