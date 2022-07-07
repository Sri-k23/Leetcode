

/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** matrixReshape(int** mat, int matSize, int* matColSize, int r, int c, int* returnSize, int** returnColumnSizes){

    int n = matColSize[0];
    
    if(matSize*n != r*c){
        *returnSize = matSize;
        *returnColumnSizes = matColSize;
         return mat;
    }
          *returnSize = r;
          *returnColumnSizes = malloc( r * sizeof(int));
          int **arr= malloc( r * sizeof(int*));
        
        for(int i=0;i<r;i++){
            arr[i] = malloc( c * sizeof(int));
            (*returnColumnSizes)[i]=c;
        }
        int size=0;
        for(int i=0;i<matSize;i++){
           for(int j=0;j<n;j++){
               size = i*n +j;
               arr[size/c][size%c]=mat[i][j]; 
            }
        }
return arr;
}