class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0,pro=1;
        while(n>0){
            int rem;
            rem=n%10;
            sum=sum+rem;
            pro=pro*rem;
            n=n/10;
        }
        return pro-sum;
    }
};