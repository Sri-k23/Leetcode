

int maximumWealth(int** accounts, int accountsSize, int* accountsColSize){
    int sum = 0;
    int n = *accountsColSize;
    int m = accountsSize;
    int max=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            sum +=accounts[i][j];
        }
        if(sum > max)
        {
            max = sum;
        }
      sum = 0;  
    }
    return max;
}