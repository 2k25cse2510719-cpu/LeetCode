class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>s1,s2;
        vector<int>arr;
        for(int i:nums1)
        s1.insert(i);
        for(int i :nums2)
        s2.insert(i);
      for(int i:s1){
     if(s2.count(i)){
        arr.push_back(i);
     }
      }
      return arr;
    }
};
