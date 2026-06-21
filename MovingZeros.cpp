class Solution {
public:
    void moveZeroes(vector<int>& nums) {
int hi = 0;
for (int i =0;i<nums.size();i++){
    if(nums[i]!=0){
nums[hi]=nums[i];
hi++;
    }
}
while(hi<nums.size()){
    nums[hi]=0;
    hi++;
}   
return ;
    }
};    
