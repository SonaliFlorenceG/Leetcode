class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int sum = 0, maxSum = 0;
        for (int num : nums) {
            if (num == 1) {
                sum++;
                maxSum = max(maxSum, sum);
            } else {
                sum = 0;
            }
        }
        return maxSum;
    }
};
