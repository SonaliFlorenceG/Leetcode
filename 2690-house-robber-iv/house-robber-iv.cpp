class Solution {
public:
    int minCapability(vector<int>& nums, int k) {
        int low = 1, high = *max_element(nums.begin(), nums.end());

        while (low < high) {
            int mid = (low + high) / 2;
            int count = 0;
            int i = 0;
            while (i < nums.size()) {
                if (nums[i] <= mid) {
                    count++;
                    i += 2;
                } else {
                    i++; 
                }
                if (count >= k) break;
            }
            if (count >= k) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }

        return low;
    }
};