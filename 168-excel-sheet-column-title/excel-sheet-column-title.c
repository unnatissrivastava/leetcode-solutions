char* convertToTitle(int columnNumber) {
    char* ans = malloc(20);
    int i = 0;

    while (columnNumber > 0) {
        columnNumber--;
        ans[i++] = 'A' + columnNumber % 26;
        columnNumber /= 26;
    }

    ans[i] = '\0';

    for (int j = 0; j < i / 2; j++) {
        char temp = ans[j];
        ans[j] = ans[i - j - 1];
        ans[i - j - 1] = temp;
    }

    return ans;
}