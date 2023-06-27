class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        int maxNum = *max_element(nums.begin(), nums.end());  // Find the maximum value in nums
        vector<int> count(maxNum + 1, 0);  // Initialize the count vector with the maximum value

        for (int i = 0; i < n; i++) {
            count[nums[i]]++;
        }

        for (int i = 0; i <= maxNum; i++) {
            if (count[i] > 1)
                return i;
        }

        return -1;
    }
};
