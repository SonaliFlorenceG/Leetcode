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
        // int i=0, j=nums.size()-1;
        // while(i<j){
        //     if (nums[i]!=0){
        //         i++;
        //     }
        //     else if (nums[i]==0 && nums[j]!=0){
        //         nums[i]=nums[j];
        //         nums[j]=0;
        //         i++;
        //     }
        //     else if(nums[j]==0) {
        //         j--;
        //     }
        // }
        for (int i=0; i<nums.size(); i++){
            if (nums[i]!=0) ans.push_back(nums[i]);
        }
        int n1=nums.size();
        int n2=ans.size();
        for (int i=0; i<n1-n2; i++){
            ans.push_back(0);
        }
        return ans;
    }
};