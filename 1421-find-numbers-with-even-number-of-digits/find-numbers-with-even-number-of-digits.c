int findNumbers(int* nums, int numsSize) {
    int i, digit, count = 0, temp;
    for (i = 0; i< numsSize; i++){
        temp = nums[i];
        digit = 0;
        while(temp>0){
            temp /= 10;
            digit ++;
        }
        if (digit % 2 == 0){
        count ++;
        }
    }
    return count;

}