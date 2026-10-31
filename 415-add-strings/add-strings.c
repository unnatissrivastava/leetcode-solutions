char* addStrings(char* num1, char* num2) {
    int i = strlen(num1) - 1;
    int j = strlen(num2) - 1;
    int carry = 0, k = 0;

    char* ans = malloc((i + j + 4) * sizeof(char));

    while(i >= 0 || j >= 0 || carry) {
        int sum = carry;

        if(i >= 0)
            sum += num1[i--] - '0';

        if(j >= 0)
            sum += num2[j--] - '0';

        ans[k++] = (sum % 10) + '0';
        carry = sum / 10;
    }

    ans[k] = '\0';

    for(int a = 0; a < k / 2; a++) {
        char temp = ans[a];
        ans[a] = ans[k - a - 1];
        ans[k - a - 1] = temp;
    }

    return ans;
}