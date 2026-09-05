int getLeastFrequentDigit(int n) {
    int digit, d;
    int count[10] = {0};
    while(n>0){
        digit = n%10;
        count[digit]++;
        n/=10;
    }
    int result = -1;
    int min = 1000;
    for (d=0;d<=9;d++){
        if(count[d]>0 && count[d]<min){
            min = count[d];
            result = d;
        }
    }
    return result;
}