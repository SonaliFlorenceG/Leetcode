class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int sum=0,x=0,c=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
        }
        for(int i=0;i<nums.size()-1;i++)
        {
            x+=nums[i];
            sum-=nums[i];
            if(abs(sum-x)%2==0)
            {
                c++;
            }
        }
        return c;

        
    }
};