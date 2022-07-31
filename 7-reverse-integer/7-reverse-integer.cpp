class Solution {
public:
    int reverse(int x) {
                int ans=0,rem;
        int max,min;
        max= pow(2,31)-1;
        min= pow(-2,31);
        while(x!=0){
            rem = x % 10;
            if(ans > max/10 || ans < min/10){
            return 0;
        }
            ans = (ans*10) + rem;
            x = x/10;
        }
        return ans;
    }

};