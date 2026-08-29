int getLeastFrequentDigit(int n) {
    int digit, d, result, min;
    int count[10] = {0};
    while (n>0){
        digit = n % 10;
        count[digit]++;
        n /= 10;
    }
    result = -1;
    min = 100;
    for(d = 0; d<=9 ;d++){
        if(count[d]>0 && count[d]<min){
            min = count[d];
            result = d;
        }
    }
    return result;
}