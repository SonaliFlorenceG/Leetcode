class Solution {
public:
    bool divideArray(vector<int>& nums) {
        map<int,int>a;
        for (int i=0; i<nums.size(); i++){
            a[nums[i]]+=1;
        }
        for (auto it:a){
            if (it.second%2==1) return false;
        }
        return true;
    }
};