class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        for (int i=0; i<nums1.size(); i++){
            int c=0,s=0;
            for (int j=0; j<nums2.size(); j++){
                if (nums2[j]==nums1[i]){
                    c=1;
                }
                if (c==1){
                    if (nums2[j]>nums1[i]){
                        ans.push_back(nums2[j]);
                        s=1;
                        break;
                    }
                }
            }
            if (s==0){
                ans.push_back(-1);
            }
        }
        return ans;
    }
};