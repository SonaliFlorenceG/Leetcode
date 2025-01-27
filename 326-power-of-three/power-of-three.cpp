class Solution {
public:
bool something(long long int p,long long int n){
    if (n==1){
        return true;
    }
    if (p==n){
        return true;
    }
    if (p>n){
        return false;
    }
    return something(p*3,n);
}
    bool isPowerOfThree(int n) {
        bool ans = something(1,n);
        return ans;
    }
};