int minElement(int* nums, int numsSize) {
    int digit, temp, i, sum;
    int min = 1000;

    for(i = 0; i < numsSize; i++) {
        temp = nums[i];
        sum = 0;

        while(temp > 0) {
            digit = temp % 10;
            sum = sum + digit;
            temp = temp / 10;
        }

        if(sum < min) {
            min = sum;
        }
    }

    return min;
}