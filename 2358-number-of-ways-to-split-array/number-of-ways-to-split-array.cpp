class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        if (nums.size()==1){
            return 1;
        }
        else{
            long long int sum1=0,sum2=0;
            int c=0;
            int n=nums.size();
            for (int i=0; i<n; i++){
                sum1+=nums[i];
            }
            for (int i=0; i<n-1; i++){
                sum2+=nums[i];
                sum1-=nums[i];
                if (sum2>=sum1){
                    c++;
                }
            }
            return c;
        }
    return 0;
    }
};