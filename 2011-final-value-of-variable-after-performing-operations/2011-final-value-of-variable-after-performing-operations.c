

int finalValueAfterOperations(char ** operations, int operationsSize){
int X=0;
    while(operationsSize--){
        if(strcmp(*operations,"++X") == 0 ||strcmp(*operations,"X++") == 0){
            X++;
        }
        else{
            X--;
        }
        operations++;
    }
    return X;
}