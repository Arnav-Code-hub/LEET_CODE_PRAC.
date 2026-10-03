int search(int* nums, int numsSize, int target) {
    int left=0,right=numsSize-1,mid;
    int flag=0;

    while(left<=right){
    mid=(left+right)/2;
        if(nums[mid]==target){
            flag=1;
            break;
        }

        else if (nums[mid]>target){
            right=mid-1;
        }

        else if (nums[mid]<target){
            left=mid+1;
        }
    }

    if (flag==0)
     return -1;
    else 
     return mid;
}