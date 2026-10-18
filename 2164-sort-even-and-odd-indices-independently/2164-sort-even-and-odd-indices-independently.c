/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortEvenOdd(int* nums, int numsSize, int* returnSize) {
    int n=numsSize;
    for(int i=0;i<n-1;i=i+2){
        int flag=0;
        for(int j=0;j+2<n;j=j+2){
            if(nums[j]>nums[j+2]){
                int temp=nums[j+2];
                nums[j+2]=nums[j];
                nums[j]=temp;
                flag=1;
            }
        }
        if(flag==0)
            break;
    }

    for(int i=1;i<n-1;i=i+2){
        int flag=0;
        for(int j=1;j+2<n;j=j+2){
            if(nums[j]<nums[j+2]){
                int temp=nums[j+2];
                nums[j+2]=nums[j];
                nums[j]=temp;
                flag=1;
            }
        }
        if(flag==0)
            break;
    }

    *returnSize = numsSize;
    return nums;
}