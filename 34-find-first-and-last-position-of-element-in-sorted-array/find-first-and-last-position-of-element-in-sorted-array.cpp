class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>temp;
        for (int i=0; i<nums.size(); i++){
            if (nums[i]==target){
                temp.push_back(i);
            }
        }
        vector<int>ans;
        if (temp.size()==0){
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;
        }
        if (temp.size()==1){
            ans.push_back(temp[0]);
            ans.push_back(temp[0]);
            return ans;
        }
        if (temp.size()==2){
            return temp;
        }
        if (temp.size()>2){
            ans.push_back(temp[0]);
            ans.push_back(temp[temp.size()-1]);
            return ans;
        }
        return ans;
    }
};