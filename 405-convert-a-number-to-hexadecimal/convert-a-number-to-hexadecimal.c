char* toHex(int num) {
    if(num == 0)
        return "0";

    char* ans = (char*)malloc(9 * sizeof(char));
    char hex[] = "0123456789abcdef";
    unsigned int n = (unsigned int)num;
    int i = 0;

    while(n > 0) {
        ans[i++] = hex[n % 16];
        n /= 16;
    }

    ans[i] = '\0';

    for(int j = 0; j < i / 2; j++) {
        char temp = ans[j];
        ans[j] = ans[i - j - 1];
        ans[i - j - 1] = temp;
    }

    return ans;
}