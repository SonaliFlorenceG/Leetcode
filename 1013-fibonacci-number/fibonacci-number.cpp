class Solution {
public:
int Fibo(int n){
    if (n==0) return 0;
    if (n==1) return 1;
    int s1=Fibo(n-1);
    int s2=Fibo(n-2);
    return s1+s2;
}
    int fib(int n) {
        int res=Fibo(n);
        return res;
    }
};