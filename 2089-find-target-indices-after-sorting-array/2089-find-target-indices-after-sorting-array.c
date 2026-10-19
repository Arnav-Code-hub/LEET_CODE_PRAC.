/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* targetIndices(int* nums, int numsSize, int target, int* returnSize) {
    int n=numsSize;
    for(int i=1;i<n;i++){
        int j=i-1;
        int temp=nums[i];
        while(j>=0 && nums[j]>temp){
            nums[j+1]=nums[j];           
            j--;
        }
        nums[j+1]=temp;
    }
    int k=0;
    int* result = (int*)malloc(n * sizeof(int));
    for(int i=0;i<n;i++){
        if(nums[i]==target){
          result[k]=i; 
          k++; 
        }
    }
    *returnSize = k;
    return result;
}