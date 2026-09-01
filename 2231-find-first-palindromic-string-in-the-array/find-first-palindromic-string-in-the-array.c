char* firstPalindrome(char** words, int wordsSize) {
    for (int i = 0; i < wordsSize; i++) {
        int l = 0;
        int h = strlen(words[i]) - 1;

        while (l < h) {
            if (words[i][l] != words[i][h])
                break;

            l++;
            h--;
        }

        if (l >= h)
            return words[i];
    }

    return "";
}