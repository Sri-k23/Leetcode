

int subtractProductAndSum(int n){
 int sum=0,product=1,diff;
 int count,rem;
  while(n!=0){
      rem=n%10;
      n/=10;
      sum=sum+rem;
      product=product*rem;
      // count++;
  } 
    diff=product-sum;
    return diff;
}