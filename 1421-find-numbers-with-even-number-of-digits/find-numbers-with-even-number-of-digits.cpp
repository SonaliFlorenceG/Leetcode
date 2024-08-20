class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int c=0;
        for (int i=0; i<nums.size(); i++){
            int s=0;
            while(nums[i]>0){
                nums[i]/=10;
                s++;
            }
            if (s%2==0){
                c++;
            }
        }
        return c;
    }
};