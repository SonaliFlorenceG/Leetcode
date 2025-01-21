class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        multiset<long long> lo, hi;
        for (int i = 0; i < (int)nums.size(); i++) {
            lo.insert(nums[i]);
            if (i>=k){
                lo.erase(lo.find(nums[i-k]));
            }
            if (i >= k - 1) {
                ans.push_back(*lo.rbegin());
            }
        }
        return ans;
    }
};