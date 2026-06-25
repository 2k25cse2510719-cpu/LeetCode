class Solution {
public :
vector<int>HowManyNumbersAreSmallerThanTheCurrentNumber(vector<int>&nums){
  vector<int>count(nums.size());
  for(int i =0;i<nums.size();i++){
    int greater=0;
    for(int j=0;j<nums.size;j++){
      if(nums[j]<nums[i]){
        greater++;
      }
    }
    count[i]=greater;
  }
  return count;
}
};
