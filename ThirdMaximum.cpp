class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n = nums.size();

    
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (nums[j] > nums[j + 1]) {
                    swap(nums[j], nums[j + 1]);
                }
            }
        }

        int count = 1;
        int largest = nums[n - 1];

        for (int i = n - 1; i > 0; i--) {
            if (nums[i] != nums[i - 1]) {
                count++;
                if (count == 3)
                    return nums[i - 1];
            }
        }

        return largest;
    }
};
