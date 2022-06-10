/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize){
 int *arr = (int*)malloc(numsSize*sizeof(int));
    *returnSize = numsSize;
    int sum = 0;
  for(int i=0 ; i < numsSize ; i++){
          arr[i] = sum + nums[i];
          sum = arr[i];
  }
    return arr;
}