int searchInsert(int* nums, int numsSize, int target) {
    int n=numsSize;
    int key = target;
    int step = 2;


    int curr = 0;
    int prev = 0;

    while(curr<n && nums[curr]<key){
        prev=curr+1;
        curr+=step;
    }

    int end;
    if(curr<n){
        end=curr;
    }
    else{
        end=n-1;
    }

    for (int i = prev; i <= end; i++) {
        if (nums[i] >= key) {
            return i;
        }
    } 
    return n;
}