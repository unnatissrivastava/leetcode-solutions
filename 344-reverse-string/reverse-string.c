void reverseString(char* s, int sSize) {
    int l, r;
    char temp;
    l = 0;
    r = sSize - 1;
    while (r > l){
        temp = s[l];
        s[l] = s[r];
        s[r] = temp;
        l ++;
        r --;
    }
    
}