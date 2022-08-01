class Solution {
public:
    bool isPowerOfTwo(int n) {
        int i=0;
        while(i<=30){
            if(n == pow(2,i)){
                return true;
            }
          i++;
        }
        return false;
    }
};