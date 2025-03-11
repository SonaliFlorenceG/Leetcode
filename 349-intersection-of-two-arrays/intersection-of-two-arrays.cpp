class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>t;
        vector<int>ans;
        for (int i=0; i<nums1.size(); i++){
            for (int j=0; j<nums2.size(); j++){
                if (nums1[i]==nums2[j]){
                    t[nums1[i]]+=1;
                }
            }
        }
        for (auto it:t){
            ans.push_back(it.first);
        }
        return ans;
    }
};