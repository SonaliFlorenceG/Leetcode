class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        vector<int>ans;
        for (int i=0; i<nums.size()-1; i++){
            if (nums[i]==nums[i+1]){
                nums[i]=2*nums[i+1];
                nums[i+1]=0;
            }
        }
        int i=0, j=0;
        while(j<nums.size()){
            if (nums[i]!=0){
                i++;
                j++;
            }
            else if (nums[i]==0 && nums[j]!=0){
                nums[i]=nums[j];
                nums[j]=0;
            }
            else if (nums[i]==0 && nums[j]==0){
                j++;
            }
        }
        for (int i=0; i<nums.size(); i++){
            ans.push_back(nums[i]);
        }
        return ans;
    }
};