int minSubArrayLen(int target, int* nums, int numsSize) {
    int n=numsSize;
    int left=0,right=0,sum=0;
    int lenght=0;
    int min=n+1;
    for(;right<n;right++){
        sum=sum+nums[right];
        while(sum>=target){
            lenght=right-left+1;

            sum=sum-nums[left];
            left++;

            if(lenght<min)
                min=lenght;
        }
    }
    if(min != (n+1))
        return min;
    else 
        return 0;
}