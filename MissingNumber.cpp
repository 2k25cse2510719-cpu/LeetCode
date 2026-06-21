class Solution {
public:
int missingNumber(vector<int>&nums){
  int min;
for(int i =0;i<nums.size();i++){
  for(int j =0;j<nums.size();j++){
    if(nums[j+1]<nums[j]){
      min=nums[j+1];
      nums[j+1]=nums[j];
      nums[j]=nums[min];
    }
  }
  if(nums[i]!=i){
    return i;
  }
}
  return nums.size();
}
};
