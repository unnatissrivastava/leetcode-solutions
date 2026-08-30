int countEven(int num) {
    int i, digit, sum, temp, count;
    count = 0;
    
    for (i = 1; i <= num; i++) {
        temp = i;      
        sum = 0;       
        
        while (temp > 0) {
            digit = temp % 10;
            sum = sum + digit;
            temp = temp / 10;
        }
        
        if (sum % 2 == 0) {
            count = count + 1;
        }
    }
    
    return count;
}