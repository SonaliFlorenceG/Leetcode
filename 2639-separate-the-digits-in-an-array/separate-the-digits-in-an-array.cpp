class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        string s="";
        vector<int>a;
        for (int i=0; i<nums.size(); i++){
            s+=to_string(nums[i]);
        }
        for(int i=0; i<s.size(); i++){
            a.push_back(s[i]-'0');
        }
        return a;
    }
};