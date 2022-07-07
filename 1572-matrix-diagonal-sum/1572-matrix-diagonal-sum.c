

int diagonalSum(int** mat, int matSize, int* matColSize){
int primary=0,secondary=0;
    for(int i=0;i<matSize;i++){
        for(int j=0;j<*matColSize;j++){
            if(i==j){
                primary+=mat[i][j];
            }
            if((i+j)==*matColSize-1){
                if(i!=j){
                    secondary+=mat[i][j];
                }
            }
        }
    }
    return primary+secondary;
}