

double average(int* salary, int salarySize){
double avg,sum=0;
int min,max;
    min=salary[0];
    max=salary[0];
    for(int i=0;i<salarySize;i++){
        if(salary[i]>max){
            max = salary[i];
        }
        if(salary[i]<min){
            min = salary[i];
        }

        sum+=salary[i];
    }
    sum = sum - (min+max);
    avg = sum/(salarySize-2);
   return avg;
}