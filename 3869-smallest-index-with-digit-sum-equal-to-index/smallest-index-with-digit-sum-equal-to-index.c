int smallestIndex(int* nums, int numsSize) {
    int digit, sum, i, temp;
    for(i=0; i<numsSize; i++){
        sum = 0;
        temp = nums[i];
        while(temp>0){
            digit = temp % 10;
            sum = sum + digit;
            temp /= 10;

        }
        if(sum == i)
           return i;
    }
    return -1;
    
}