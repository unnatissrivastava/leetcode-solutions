int longestPalindrome(char* s) {
    int count[128] = {0};
    int len = 0;
    int odd = 0;

    for(int i = 0; s[i] != '\0'; i++) {
        count[s[i]]++;
    }

    for(int i = 0; i < 128; i++) {
        len += (count[i] / 2) * 2;

        if(count[i] % 2 == 1)
            odd = 1;
    }

    return len + odd;
}