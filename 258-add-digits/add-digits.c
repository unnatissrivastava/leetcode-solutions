int addDigits(int num) {
    int temp, sum, digit;
    while(num>=10){
        temp = num;
        sum = 0;

        while(temp > 0){
            digit = temp % 10;
            sum = sum + digit;
            temp /= 10;
        }
        num = sum;
    }
    return num;
}