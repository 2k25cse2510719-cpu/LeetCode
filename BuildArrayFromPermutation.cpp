class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int lenght=nums.size();
        vector<int>ans(lenght);
        for(int i =0 ;i<nums.size();i++){
            ans[i]=nums[nums[i]];
        }
            return ans;
    }
};
