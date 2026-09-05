void reverseString(char* s, int sSize) {
    int a, b, temp;
    a = 0;
    b = sSize - 1;
    while (b>a){
        temp = s[a];
        s[a] = s[b];
        s[b] = temp;
        a ++;
        b--;
    }
}