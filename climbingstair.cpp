class Solution {
public:
    int climbStairs(int n) {
        if(n==1||n==2||n==3) return n;
        int fn_1 = 3, fn_2 = 2; //fn_1 = f(n-1)
        int fn = fn_1+fn_2;
        int i=4;
        while(i!=n){
            fn_2 = fn_1;
            fn_1 = fn;
            fn = fn_1+fn_2;
            i++;
        }
        return fn;
    }
};