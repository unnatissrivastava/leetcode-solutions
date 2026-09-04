bool isSameAfterReversals(int num) {
    int temp, digit;
    int r1 = 0;
    int r2 = 0;
    int original = num;
    temp = num;
    while(temp>0){
        digit = temp%10;
        r1 = r1 * 10 + digit;
        temp /= 10;
    }
    temp = r1;
    while(temp>0){
        digit = temp%10;
        r2 = r2*10 + digit;
        temp /= 10;
    }
    return r2 == original;
}